#include "Brain.hpp"

Brain::Brain(void) {
	std::cout << "Brain constructor called." << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i].clear();
}

Brain::Brain(const Brain& squishy) {
	std::cout << "Brain copy constructor called." << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = squishy.ideas[i];
}

Brain::~Brain(void) {
	std::cout << "Brain destructor called." << std::endl;
}

Brain& Brain::operator=(const Brain& toCopy) {
	std::cout << "Brain = operator called." << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = toCopy.ideas[i];
	return (*this);
}

std::string Brain::getIdea(int n) const {
	if (n >= 0 && n <= 99)
		return (this->ideas[n]);
	else
		return ("Trying to think outside the box are we?");
}

void Brain::setIdea(int n, std::string str) {
	if (n >= 0 && n <= 99)
		this->ideas[n] = str;
	else
		std::cout << "Trying to set idea out of range." << std::endl;
}
