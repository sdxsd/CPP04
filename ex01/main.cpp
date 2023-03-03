#include "Dog.hpp"
#include "Cat.hpp"

void brain_test(void) {
	int		fail = false;
	Animal* Fred = new Cat();
	Animal* Saartje = new Cat();

	Fred->setIdeaInBrain(0, "I want to eat Saartjes food.");
	std::cout << "Fred has idea: " << Fred->getIdeaFromBrain(0) << " at position 0" << std::endl;
	Saartje->setIdeaInBrain(0, "I don't want Fred to eat my food.");
	std::cout << "Saartje has idea: " << Saartje->getIdeaFromBrain(0) << " at position 0" << std::endl;
	*Fred = *Saartje;
	std::cout << "after \"*Fred = *Saartje;\" Fred has idea: " << Fred->getIdeaFromBrain(0) << " at position 0"
			  << std::endl;

	for (int i = 0; i < 100; i++)
		Fred->setIdeaInBrain(i, "FOOD!");
	*Saartje = *Fred;
	for (int i = 0; i < 100; i++)
		if (Saartje->getIdeaFromBrain(i) != "FOOD!")
			fail = true ;
	if (fail == true)
		std::cout << "Deep copy failed." << std::endl;
	else
		std::cout << "Deep copy successful" << std::endl;
	delete Fred;
	delete Saartje;
}

int main(void) {
	brain_test();
	Animal *zoo[10];
	for (int i = 0; i < 5; i++)
		zoo[i] = new Dog();
	for (int i = 5; i < 10; i++)
		zoo[i] = new Cat();
	zoo[4]->makeSound();
	zoo[9]->makeSound();
	for (int i = 0; i < 5; i++)
		delete (Dog*)zoo[i];
	for (int i = 5; i < 10; i++)
		delete (Animal*)zoo[i];
}
