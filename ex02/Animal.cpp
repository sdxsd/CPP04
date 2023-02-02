#include "Animal.hpp"

Animal::Animal(void) {
	std::cout << "Animal constructor called." << std::endl;
	type = "";
	brain = NULL;
}

Animal::~Animal(void) {
	std::cout << "Animal destructor called." << std::endl;
}
