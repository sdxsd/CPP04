#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal {
	private:
		std::string	type;
	public:
		Animal(void);
		Animal(const Animal& toCopy);
		~Animal(void);
		Animal& operator=(const Animal& toCopy);
		void makeSound(void);
};

#endif // ANIMAL_H
