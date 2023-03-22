#include "Animal.hpp"

Animal::Animal(void) {
	std::cout << "Animal constructor called." << std::endl;
	type = "";
}

Animal::~Animal(void) {
	std::cout << "Animal destructor called." << std::endl;
}

Animal& Animal::operator=(const Animal& toCopy) {
	std::cout << "Animal = operator called." << std::endl;
	this->type = toCopy.type;
	return (*this);
}

std::string Animal::getType(void) const {
	return (type);
}
