#pragma once

#include <string>

class Greeter
{
public:
	Greeter(const std::string &greetingMessage);
	void setGreeting(const std::string &newGreeting);
	std::string greet(const std::string &name);

private:
	std::string greetingMessage;
};