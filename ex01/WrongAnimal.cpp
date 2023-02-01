#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) {
	std::cout << "WrongAnimal constructor called." << std::endl;
	type = "";
}

WrongAnimal::WrongAnimal(const WrongAnimal& toCopy) {
	std::cout << "WrongAnimal copy constructor called." << std::endl;
	type = toCopy.type;
}

WrongAnimal::~WrongAnimal(void) {
	std::cout << "WrongAnimal destructor called." << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& toCopy) {
	std::cout << "WrongAnimal = operator called." << std::endl;
	this->type = toCopy.type;
	return (*this);
}

std::string WrongAnimal::getType(void) const {
	return (type);
}

void WrongAnimal::makeSound(void) const {
		std::cout << "* Zoep Zoep *" << std::endl;
}
