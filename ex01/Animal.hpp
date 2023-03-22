#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal {
	protected:
		std::string	type;
	public:
		Animal(void);
		Animal(const Animal& toCopy);
		virtual ~Animal(void);
		virtual Animal& operator=(const Animal& toCopy);
		virtual void makeSound(void) const;
		std::string getType(void) const;
};

#endif // ANIMAL_H
