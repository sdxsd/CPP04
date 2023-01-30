#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal {
	protected:
		std::string	type;
	public:
		Animal(void);
		Animal(const Animal& toCopy);
		~Animal(void);
		Animal& operator=(const Animal& toCopy);
		std::string getType(void) const;
		virtual void makeSound(void) const;
};

#endif // ANIMAL_H
