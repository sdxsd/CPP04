#include "Dog.hpp"

Dog::Dog(void) {
	std::cout << "Dog constructor called." << std::endl;
	type = "Dog";
	brain = new Brain();
}

Dog::Dog(const Dog& toCopy): Animal((const Animal&)toCopy) {
	std::cout << "Dog copy constructor called." << std::endl;
	type = toCopy.type;
	brain = toCopy.brain;
}

Dog::~Dog(void) {
	std::cout << "Dog destructor called." << std::endl;
	delete brain;
}

Dog& Dog::operator=(const Dog& toCopy) {
	std::cout << "Dog = operator called." << std::endl;
	this->type = toCopy.type;
	if (brain != NULL)
		*this->brain = *toCopy.brain;
	return (*this);
}

void Dog::makeSound(void) const {
	std::cout << "* Bjark Bjark! *" << std::endl;
}

std::string Dog::getType(void) const {
	return (type);
}

void Dog::setIdeaInBrain(int n, std::string newIdea) {
	if (brain != NULL)
		brain->setIdea(n, newIdea);
}

std::string Dog::getIdeaFromBrain(int n) const {
	if (brain != NULL)
		return (brain->getIdea(n));
	else
		return ("");
}
