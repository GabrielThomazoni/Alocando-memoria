#pragma once
#include <iostream>
#include <string>

class User{

private:
	std::string name;

public:
	User(std::string name);
	User(const User&);
	std::string getName() const;
	
};

