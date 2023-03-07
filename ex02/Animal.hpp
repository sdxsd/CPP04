#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include "Brain.hpp"

class Animal {
	protected:
		std::string	type;
		Brain		*brain;
	public:
		Animal(void);
		virtual ~Animal(void) = 0;
		virtual void makeSound(void) const = 0;
		void setIdeaInBrain(int n, std::string newIdea);
		virtual Animal& operator=(const Animal& toCopy);
		std::string getIdeaFromBrain(int n) const;
		std::string getType(void) const;
};

#endif // ANIMAL_H
