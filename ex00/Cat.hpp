#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"

class Cat: public Animal {
	public:
		Cat(void);
		Cat(const Cat& toCopy);
		virtual ~Cat(void);
		Cat& operator=(const Cat &toCopy);
		void makeSound(void) const;
};

#endif // CAT_H
