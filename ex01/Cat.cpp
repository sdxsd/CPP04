#include "Cat.hpp"

Cat::Cat(void) {
	std::cout << "Cat constructor called." << std::endl;
	type = "Cat";
	brain = new Brain();
}

Cat::Cat(const Cat& toCopy): Animal((const Animal&)toCopy) {
	std::cout << "Cat copy constructor called." << std::endl;
	type = toCopy.type;
	brain = new Brain();
	*brain = *toCopy.brain;
}

Cat::~Cat(void) {
	std::cout << "Cat destructor called." << std::endl;
	delete brain;
}

Cat& Cat::operator=(const Cat& toCopy) {
	std::cout << "Cat = operator called." << std::endl;
	this->type = toCopy.type;
	if (brain != NULL)
		*this->brain = *toCopy.brain;
	else {
		brain = new Brain();
		*this->brain = *toCopy.brain;
	}
	return (*this);
}

void Cat::makeSound(void) const {
	std::cout << "* Meow *" << std::endl;
}

void Cat::setIdeaInBrain(int n, std::string newIdea) {
	if (brain != NULL)
		brain->setIdea(n, newIdea);
}

std::string Cat::getIdeaFromBrain(int n) const {
	if (brain != NULL)
		return (brain->getIdea(n));
	else
		return ("");
}
