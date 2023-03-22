#ifndef DOG_H
#define DOG_H

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal {
	private:
		Brain	*brain;
	public:
		Dog(void);
		Dog(const Dog& toCopy);
		~Dog(void);
		Dog& operator=(const Dog &toCopy);
		void makeSound(void) const;
		std::string getType(void) const;
		std::string getIdeaFromBrain(int n) const;
		void setIdeaInBrain(int n, std::string newIdea);
};

#endif // DOG_H
