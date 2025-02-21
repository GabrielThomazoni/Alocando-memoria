#pragma once
#include <iostream>
#include <string>
#include "User.hpp"

class WordCounter
{
private:
	User text;
	int wordsCounted = 0;

public:
	WordCounter(const User&);

};

