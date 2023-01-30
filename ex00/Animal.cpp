#include "Animal.hpp"

Animal::Animal(void) {
	std::cout << "Animal constructor called." << std::endl;
	type = "";
}

Animal::Animal(const Animal& toCopy) {
	std::cout << "Animal copy constructor called." << std::endl;
	type = toCopy.type;
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

void Animal::makeSound(void) const {
	if (type == "Dog")
		std::cout << "* Bark *" << std::endl;
	if (type == "Cat")
		std::cout << "* Meow *" << std::endl;
	else
		std::cout << "* Unknowable terror noises *" << std::endl;
}
