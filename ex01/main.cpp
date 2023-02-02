#include "Dog.hpp"
#include "Cat.hpp"

void brain_test(void) {
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
	// brain_test();
	Animal *zoo[100];
	for (int i = 0; i < 49; i++)
		zoo[i] = new Dog();
	for (int i = 49; i < 100; i++)
		zoo[i] = new Cat();
	zoo[49]->makeSound();
	zoo[99]->makeSound();
	for (int i = 0; i < 49; i++)
		delete (Dog*)zoo[i];
	for (int i = 49; i < 100; i++)
		delete (Animal*)zoo[i];
}
