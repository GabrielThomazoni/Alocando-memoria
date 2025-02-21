#pragma once
#include <iostream>
#include <string>


class String
{
private:
	char* data;
	size_t size;

public:
	String(const char* string) {
		std::cout << "String criada (constructor)" << std::endl;
		size = strlen(string);
		data = new char[size];
		memcpy(data, string, size);

	}

	~String() {
 		delete data;
	}

	String(const String& copyString) {
		std::cout << "String copiada (copyconstructor)" << std::endl;
		size = strlen(copyString.data);
		data = new char[size];
		memcpy(data, copyString.data, size);
	}

	String(String&& moveString) {
		std::cout << "String movida (moveconstructor)" << std::endl;
		size = moveString.size;
		data = moveString.data;
		moveString.size = 0;
		moveString.data = nullptr;
	}

	friend std::ostream& operator<<(std::ostream& fluxSaída, String text) {
		for (size_t i = 0; i < text.size; i++) {
			fluxSaída << text.data[i];
		}
		return fluxSaída;
	}

	size_t length() {
		return size;
	}
};

