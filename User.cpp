#include "User.hpp"

User::User(std::string name) : name(name) {
	std::cout << name << " cadastrado!" << std::endl;
}

User::User(const User& outroName) : name(outroName.name) {
	std::cout << "Copiando nome!" << std::endl;
}

std::string User::getName() const{
	return name;
}