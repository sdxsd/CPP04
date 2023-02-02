#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"

class Cat: public Animal {
	public:
		Cat(void);
		Cat(const Cat& toCopy);
		~Cat(void);
		Cat& operator=(const Cat &toCopy);
		void makeSound(void) const;
		std::string getType(void) const;
		void setIdeaInBrain(int n, std::string newIdea);
		std::string getIdeaFromBrain(int n) const;
};

#endif // CAT_H
