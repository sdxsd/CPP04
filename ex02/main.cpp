#include "Dog.hpp"
#include "Cat.hpp"

void brain_test(void) {
	int	fail = false;
	Cat* Fred = new Cat();
	Cat* Saartje = new Cat();
	Cat	zat(*Saartje);

	Fred->setIdeaInBrain(0, "I want to eat Saartjes food.");
	std::cout << "Fred has idea: " << Fred->getIdeaFromBrain(0) << " at position 0" << std::endl;
	Saartje->setIdeaInBrain(0, "I don't want Fred to eat my food.");
	std::cout << "Saartje has idea: " << Saartje->getIdeaFromBrain(0) << " at position 0" << std::endl;
	*Saartje = *Fred;
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

// NOTE: Trying to instantiate an Animal here will cause a compilation error.
int main(void) {
	brain_test();
	Cat beast;
	Dog creature;
}
