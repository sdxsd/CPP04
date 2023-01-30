#ifndef DOG_H
#define DOG_H

#include "Animal.hpp"

class Dog: public Animal {
	public:
		Dog(void);
		Dog(Dog& toCopy);
		~Dog(void);
		Dog& operator=(Dog &toCopy);
};

#endif // DOG_H
