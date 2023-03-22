#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal {
	private:
		Brain	*brain;
	public:
		Cat(void);
		Cat(const Cat& toCopy);
		~Cat(void);
		Cat& operator=(const Cat &toCopy);
		void makeSound(void) const;
		void setIdeaInBrain(int n, std::string newIdea);
		std::string getIdeaFromBrain(int n) const;
};

#endif // CAT_H
