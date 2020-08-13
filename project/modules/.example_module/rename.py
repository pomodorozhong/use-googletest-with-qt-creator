import os
import fnmatch
import sys


def findReplace(directory, filePattern, find, replace):
    for path, dirs, files in os.walk(os.path.abspath(directory)):
        for filename in fnmatch.filter(files, filePattern):
            filepath = os.path.join(path, filename)
            with open(filepath) as f:
                s = f.read()
            s = s.replace(find, replace)
            with open(filepath, "w") as f:
                f.write(s)


if __name__ == "__main__":

    # old names
    OldClassName = "ExampleModule"
    oldfilename = OldClassName.lower()
    OLDINCLUDEGUARDNAME = OldClassName.upper()
    oldfilename_pri = oldfilename + ".pri"
    oldfilename_pro = oldfilename + "_test.pro"
    oldfilename_h = oldfilename + ".h"
    oldfilename_cpp = oldfilename + ".cpp"
    oldsuitename = "examplesuite"

    # new names
    NewClassName = sys.argv[1]
    newfilename = NewClassName.lower()
    NEWINCLUDEGUARDNAME = NewClassName.upper()
    newfilename_pri = newfilename + ".pri"
    newfilename_pro = newfilename + "_test.pro"
    newfilename_h = newfilename + ".h"
    newfilename_cpp = newfilename + ".cpp"
    newsuitename = newfilename

    # findReplace("some_dir", "find this", "replace with this", "*.txt")
    findReplace("./", "*.pri", oldfilename, newfilename)
    findReplace("./", "*.pro", oldfilename, newfilename)
    findReplace("./", "*.cpp", oldfilename, newfilename)
    findReplace("./", "*.cpp", OldClassName, NewClassName)
    findReplace("./", "*.h", oldfilename, newfilename)
    findReplace("./", "*.h", OLDINCLUDEGUARDNAME, NEWINCLUDEGUARDNAME)
    findReplace("./", "*.h", OldClassName, NewClassName)

    os.rename("./src/" + oldfilename_h, "./src/" + newfilename_h)
    os.rename("./src/" + oldfilename_cpp, "./src/" + newfilename_cpp)
    os.rename("./test/" + oldfilename_pro, "./test/" + newfilename_pro)
    os.rename(oldfilename_pri, newfilename_pri)
