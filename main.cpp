#include <iostream>
#include <string>
#include <memory>
#include "User.hpp"

void* operator new(size_t bytes) {
	std::cout << "Alocando: " << bytes << "bytes" << std::endl;
	return malloc(bytes);
}

void displayText(std::string_view text) {
	std::cout << text << std::endl;
}

void displayPtr(std::shared_ptr<User> user) {
	std::cout << user->getName() << std::endl;
}

int main() {
	
	std::string name = "Gabriel Thomazoni & Matheus Silva";
	std::cout << "---------------------------------------------" << std::endl;

	std::string_view name1(name.c_str(), name.find('&'));
	std::string_view name2(name.c_str() + name.find('&') +2);
	
	
	displayText(name1);
	displayText(name2);
	displayText("Relou Uordi");
	std::cout << std::endl;

	std::shared_ptr<User> user = std::make_shared<User>("Victor Matheus Souza");
	std::cout << "---------------------------------------------" << std::endl;
	
	displayPtr(user);

	return 0;

}