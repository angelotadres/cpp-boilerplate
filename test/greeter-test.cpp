#include <gtest/gtest.h>
#include "greeter.h"

TEST(GreeterTest, CheckContructor)
{
	Greeter greeter = Greeter("Hi");
	EXPECT_EQ(greeter.greet("Alice"), "Hi Alice!");
}

TEST(GreeterTest, CheckSetter)
{
	Greeter greeter = Greeter("Hello");
	greeter.setGreeting("Hello");
	EXPECT_EQ(greeter.greet("Alice"), "Hello Alice!");
}