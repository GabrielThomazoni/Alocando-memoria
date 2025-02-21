#pragma once
#include <iostream>
#include <string>
#include "String.hpp"

class User{

private:
	String name;

public:
	User(const String& name);
	User(String&& name);
	User(const User&);
	String getName() const;

};

