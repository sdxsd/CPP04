#ifndef DOG_H
#define DOG_H

#include "Animal.hpp"

class Dog: public Animal {
	public:
		Dog(void);
		Dog(const Dog& toCopy);
		~Dog(void);
		Dog& operator=(const Dog &toCopy);
};

#endif // DOG_H
