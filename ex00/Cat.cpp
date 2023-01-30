#include "Cat.hpp"

Cat::Cat(void) {
	std::cout << "Cat constructor called." << std::endl;
	type = "* Meow *";
}

Cat::Cat(const Cat& toCopy) {
	std::cout << "Cat copy constructor called." << std::endl;
	type = toCopy.type;
}

Cat::~Cat(void) {
	std::cout << "Cat destructor called." << std::endl;
}

Cat& Cat::operator=(const Cat& toCopy) {
	std::cout << "Cat = operator called." << std::endl;
	this->type = toCopy.type;
	return (*this);
}
