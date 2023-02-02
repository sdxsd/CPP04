#include "Dog.hpp"
#include "Cat.hpp"

void copy_test(void) {
	Animal* Fred = new Cat();
	Animal* Saartje = new Cat();

	Fred->setIdeaInBrain(0, "I want to eat Saartjes food.");
	std::cout << "Fred has idea: " << Fred->getIdeaFromBrain(0) << " at position 0" << std::endl;
	Saartje->setIdeaInBrain(0, "I don't want Fred to eat my food.");
	std::cout << "Saartje has idea: " << Saartje->getIdeaFromBrain(0) << " at position 0" << std::endl;
	*Fred = *Saartje;
	std::cout << "\"*after *Fred = *Saartje;\" Fred has idea: " << Fred->getIdeaFromBrain(0) << " at position 0"
			  << std::endl;
	delete Fred;
	delete Saartje;
}

int main(void) {
	// const Animal* meta = new Animal();
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();
	// std::cout << j->getType() << " " << std::endl;
	// std::cout << i->getType() << " " << std::endl;
	// i->makeSound();
	// j->makeSound();
	// meta->makeSound();
	// delete meta;
	// delete j;
	// delete i;
	copy_test();
}
