#include "greeter.h"
#include <iostream>

Greeter::Greeter(const std::string &greetingMessage)
{
	this->greetingMessage = greetingMessage;
}

void Greeter::setGreeting(const std::string &newGreeting)
{
	greetingMessage = newGreeting;
}

std::string Greeter::greet(const std::string &name)
{
	return greetingMessage + " " + name + "!";
}