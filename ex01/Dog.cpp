#include "Dog.hpp"

Dog::Dog(void) {
	std::cout << "Dog constructor called." << std::endl;
	type = "Dog";
	brain = new Brain();
}

Dog::Dog(const Dog& toCopy): Animal((const Animal&)toCopy) {
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

void Dog::makeSound(void) const {
	std::cout << "* Bjark Bjark! *" << std::endl;
}
