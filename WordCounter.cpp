#include "WordCounter.hpp"

WordCounter::WordCounter(const User& text) : text(text){
	wordsCounted =  text.getName().length();
	std::cout << "Letras contadas: " << wordsCounted << std::endl;
}

