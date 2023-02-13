#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H

#include <iostream>

class WrongAnimal {
	protected:
		std::string	type;
	public:
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal& toCopy);
		~WrongAnimal(void);
		WrongAnimal& operator=(const WrongAnimal& toCopy);
		std::string getType(void) const;
		void makeSound(void) const;
};

#endif // WRONGANIMAL_H
