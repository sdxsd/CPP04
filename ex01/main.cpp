#include "Dog.hpp"
#include "Cat.hpp"

void copy_test(void) {
	Animal* Fred = new Cat();
	Animal* Saartje = new Cat();

	delete Fred;
	delete Saartje;
}

int main(void) {
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete j;
	delete i;
}
