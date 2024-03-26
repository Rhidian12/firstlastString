#include <gtest/gtest.h>
#include <string>
#include <string_view>

#include "FirstLast.h"

const std::string HELLO_WORLD_STR = "Hello World!";
constexpr std::string_view HELLO_WORLD_STR_VIEW = "Hello World!";

TEST(FirstLastString, testStringFirst)
{
	EXPECT_EQ(stdproposal::first(HELLO_WORLD_STR, 0), "");
	EXPECT_EQ(stdproposal::first(HELLO_WORLD_STR, 2), "He");
	EXPECT_EQ(stdproposal::first(HELLO_WORLD_STR, 5), "Hello");
	EXPECT_EQ(stdproposal::first(HELLO_WORLD_STR, 12), "Hello World!");
	EXPECT_EQ(stdproposal::first(HELLO_WORLD_STR, 2550), "Hello World!");
	EXPECT_EQ(stdproposal::first(HELLO_WORLD_STR, static_cast<size_t>(-15)), "Hello World!");
}

TEST(FirstLastString, testStringFirstView)
{
	EXPECT_EQ(stdproposal::first(HELLO_WORLD_STR_VIEW, 0), "");
	EXPECT_EQ(stdproposal::first(HELLO_WORLD_STR_VIEW, 2), "He");
	EXPECT_EQ(stdproposal::first(HELLO_WORLD_STR_VIEW, 5), "Hello");
	EXPECT_EQ(stdproposal::first(HELLO_WORLD_STR_VIEW, 12), "Hello World!");
	EXPECT_EQ(stdproposal::first(HELLO_WORLD_STR_VIEW, 2550), "Hello World!");
	EXPECT_EQ(stdproposal::first(HELLO_WORLD_STR_VIEW, static_cast<size_t>(-15)), "Hello World!");
}

TEST(FirstLastString, testStringLast)
{
	EXPECT_EQ(stdproposal::last(HELLO_WORLD_STR, 0), "");
	EXPECT_EQ(stdproposal::last(HELLO_WORLD_STR, 2), "d!");
	EXPECT_EQ(stdproposal::last(HELLO_WORLD_STR, 6), "World!");
	EXPECT_EQ(stdproposal::last(HELLO_WORLD_STR, 12), "Hello World!");
	EXPECT_EQ(stdproposal::last(HELLO_WORLD_STR, 2550), "Hello World!");
	EXPECT_EQ(stdproposal::last(HELLO_WORLD_STR, static_cast<size_t>(-15)), "Hello World!");
}

TEST(FirstLastString, testStringLastView)
{
	EXPECT_EQ(stdproposal::last(HELLO_WORLD_STR_VIEW, 0), "");
	EXPECT_EQ(stdproposal::last(HELLO_WORLD_STR_VIEW, 2), "d!");
	EXPECT_EQ(stdproposal::last(HELLO_WORLD_STR_VIEW, 6), "World!");
	EXPECT_EQ(stdproposal::last(HELLO_WORLD_STR_VIEW, 12), "Hello World!");
	EXPECT_EQ(stdproposal::last(HELLO_WORLD_STR_VIEW, 2550), "Hello World!");
	EXPECT_EQ(stdproposal::last(HELLO_WORLD_STR_VIEW, static_cast<size_t>(-15)), "Hello World!");
}