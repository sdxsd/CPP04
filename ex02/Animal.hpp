#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include "Brain.hpp"

class Animal {
	protected:
		std::string	type;
		Brain		*brain;
		Animal& operator=(const Animal& toCopy);
	public:
		Animal(void);
		virtual ~Animal(void);
		virtual void makeSound(void) const = 0;
		virtual std::string getType(void) const = 0;
		virtual void setIdeaInBrain(int n, std::string newIdea) = 0;
		virtual std::string getIdeaFromBrain(int n) const = 0;
};

#endif // ANIMAL_H
