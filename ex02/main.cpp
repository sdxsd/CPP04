#include "Dog.hpp"
#include "Cat.hpp"

void brain_test(void) {
	Cat* Fred = new Cat();
	Cat* Saartje = new Cat();

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
	Cat beast;
}
