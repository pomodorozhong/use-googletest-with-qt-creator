#ifndef TST_EXAMPLE_CASE_H
#define TST_EXAMPLE_CASE_H

#include <fizzbuzz.h>
#include <gmock/gmock-matchers.h>
#include <gtest/gtest.h>

using namespace testing;

TEST(example_suite, normal_case)
{
    // Arrange
    const std::string input = "The quick brown fox jumps over a lazy dog.";
    std::string expect      = "The quick brown fox jumps over a lazy dog.";
    std::string actual      = "";

    // Act
    actual = FizzBuzz::Echo(input);

    // Assert
    EXPECT_EQ(expect, actual);
}

TEST(example_suite, fail_case)
{
    // Arrange
    const std::string input = "fail_case";
    std::string expect      = "fail_case";
    std::string actual      = "";

    // Act
    actual = FizzBuzz::Echo(input);

    // Assert
    EXPECT_EQ(expect, actual);
}
#endif  // TST_EXAMPLE_CASE_H
