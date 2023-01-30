#ifndef WRONGCAT_H
#define WRONGCAT_H

#include "WrongCat.hpp"

class WrongCat: public WrongAnimal {
	public:
		WrongCat(void);
		WrongCat(const WrongCat& toCopy);
		~WrongCat(void);
		WrongCat& operator=(const WrongCat &toCopy);
		void makeSound(void) const;
};

#endif // WRONGCAT_H
