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
		virtual ~Animal(void);
		virtual void makeSound(void) const = 0;
		std::string getType(void) const;
		void setIdeaInBrain(int n, std::string newIdea);
		std::string getIdeaFromBrain(int n) const;
};

#endif // ANIMAL_H
