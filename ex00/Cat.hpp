#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"

class Cat: public Animal {
	public:
		Cat(void);
		Cat(const Cat& toCopy);
		~Cat(void);
		Cat& operator=(const Cat &toCopy);
};

#endif // CAT_H
