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
		virtual Animal& operator=(const Animal& toCopy);
		virtual void makeSound(void) const;
		std::string getType(void) const;
		void setIdeaInBrain(int n, std::string newIdea);
		std::string getIdeaFromBrain(int n) const;
};

#endif // ANIMAL_H
