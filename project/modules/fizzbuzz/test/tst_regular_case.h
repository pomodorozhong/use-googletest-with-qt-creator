#ifndef TST_REGULAR_CASE_H
#define TST_REGULAR_CASE_H

#include <fizzbuzz.h>
#include <gmock/gmock-matchers.h>
#include <gtest/gtest.h>

using namespace testing;

TEST(FizzBuzz_GetOutputText, expect_Fizz_when_index_is_3)
{
    // Arrange
    const int index          = 3;
    const std::string expect = "Fizz";
    std::string actual       = "";

    // Act
    actual = FizzBuzz::GetOutputText(index);

    // Assert
    EXPECT_EQ(expect, actual);
}

TEST(FizzBuzz_GetOutputText, expect_Buzz_when_index_is_5)
{
    // Arrange
    const int index          = 5;
    const std::string expect = "Buzz";
    std::string actual       = "";

    // Act
    actual = FizzBuzz::GetOutputText(index);

    // Assert
    EXPECT_EQ(expect, actual);
}

TEST(FizzBuzz_GetOutputText, expect_FizzBuzz_when_index_is_15)
{
    // Arrange
    const int index          = 15;
    const std::string expect = "FizzBuzz";
    std::string actual       = "";

    // Act
    actual = FizzBuzz::GetOutputText(index);

    // Assert
    EXPECT_EQ(expect, actual);
}

TEST(FizzBuzz_GetOutputText, expect_7_when_index_is_7)
{
    // Arrange
    const int index          = 7;
    const std::string expect = "7";
    std::string actual       = "";

    // Act
    actual = FizzBuzz::GetOutputText(index);

    // Assert
    EXPECT_EQ(expect, actual);
}

#endif  // TST_REGULAR_CASE_H
