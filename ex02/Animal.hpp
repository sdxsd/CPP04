#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal {
	protected:
		std::string	type;
	public:
		Animal(void);
		virtual ~Animal(void) = 0;
		virtual void makeSound(void) const = 0;
		virtual Animal& operator=(const Animal& toCopy);
		std::string getType(void) const;
};

#endif // ANIMAL_H
