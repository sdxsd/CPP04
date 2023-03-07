#include "Cat.hpp"

Cat::Cat(void) {
	std::cout << "Cat constructor called." << std::endl;
	type = "Cat";
}

Cat::Cat(const Cat& toCopy): Animal((const Animal&)toCopy) {
	std::cout << "Cat copy constructor called." << std::endl;
	type = toCopy.type;
	if (toCopy.brain != NULL)
		*brain = *toCopy.brain;
}

Cat::~Cat(void) {
	std::cout << "Cat destructor called." << std::endl;
}

Cat& Cat::operator=(const Cat& toCopy) {
	std::cout << "Cat = operator called." << std::endl;
	this->type = toCopy.type;
	if (toCopy.brain != NULL)
		*this->brain = *toCopy.brain;
	return (*this);
}

void Cat::makeSound(void) const {
	std::cout << "* Meow *" << std::endl;
}
