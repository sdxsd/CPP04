#include "Animal.hpp"

Animal::Animal(void) {
	std::cout << "Animal constructor called." << std::endl;
	type = "";
	brain = new Brain();
}

Animal::~Animal(void) {
	std::cout << "Animal destructor called." << std::endl;
	delete brain;
}

std::string Animal::getType(void) const {
	return (type);
}

void Animal::setIdeaInBrain(int n, std::string newIdea) {
	if (brain != NULL)
		brain->setIdea(n, newIdea);
}

std::string Animal::getIdeaFromBrain(int n) const {
	if (brain != NULL)
		return (brain->getIdea(n));
	else
		return ("");
}
