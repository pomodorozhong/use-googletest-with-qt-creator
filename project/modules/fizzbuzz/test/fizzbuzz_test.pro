include(gtest_dependency.pri)
include(../fizzbuzz.pri)

TEMPLATE = app
CONFIG += console
CONFIG += c++11
CONFIG -= app_bundle
CONFIG += thread
CONFIG -= qt

HEADERS += \
        tst_regular_case.h

SOURCES += \
        main.cpp
