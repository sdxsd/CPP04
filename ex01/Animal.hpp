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
		Animal(const Animal& toCopy);
		virtual ~Animal(void);
		Animal& operator=(const Animal& toCopy);
		std::string getType(void) const;
		virtual void makeSound(void) const;
		void setIdeaInBrain(int n, std::string newIdea);
		std::string getIdeaFromBrain(int n) const;
};

#endif // ANIMAL_H
