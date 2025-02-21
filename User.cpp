#include "User.hpp"

User::User(const String& name) : name(name) {
	std::cout << "Nome cadastrado!" << std::endl;
}

User::User(const User& outroName) : name(outroName.name) {
	std::cout << "Copiando nome!" << std::endl;
}

User::User(String&& name) : name((String&&)name) {
	std::cout << "Movendo nome!" << std::endl;
}


String User::getName() const {
	return name;
}
