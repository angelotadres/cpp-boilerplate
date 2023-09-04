#include <iostream>
#include "greeter.h"

int main()
{
	Greeter myGreeter("Hello");
	std::cout << myGreeter.greet("John") << std::endl;
	myGreeter.setGreeting("Hi");
	std::cout << myGreeter.greet("Alice") << std::endl;
	return 0;
}