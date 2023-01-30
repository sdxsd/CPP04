#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"

class Cat: public Animal {
	public:
		Cat(void);
		Cat(Cat& toCopy);
		~Cat(void);
		Cat& operator=(Cat &toCopy);
};

#endif // CAT_H
