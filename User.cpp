#include "User.hpp"

User::User(std::string name) : name(name) {
	std::cout << name << " cadastrado!" << std::endl;
}

std::string User::getName() {
	return name;
}