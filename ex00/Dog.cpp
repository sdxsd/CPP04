#include "Dog.hpp"

Dog::Dog(void) {
	std::cout << "Dog constructor called." << std::endl;
	type = "* Bark *";
}

Dog::Dog(const Dog& toCopy) {
	std::cout << "Dog copy constructor called." << std::endl;
	type = toCopy.type;
}

Dog::~Dog(void) {
	std::cout << "Dog destructor called." << std::endl;
}

Dog& Dog::operator=(const Dog& toCopy) {
	std::cout << "Dog = operator called." << std::endl;
	this->type = toCopy.type;
	return (*this);
}
