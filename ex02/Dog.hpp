#ifndef DOG_H
#define DOG_H

#include "Animal.hpp"

class Dog: public Animal {
	public:
		Dog(void);
		Dog(const Dog& toCopy);
		~Dog(void);
		Dog& operator=(const Dog &toCopy);
		void makeSound(void) const;
		std::string getType(void) const;
		void setIdeaInBrain(int n, std::string newIdea);
		std::string getIdeaFromBrain(int n) const;
};

#endif // DOG_H
