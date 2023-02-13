#include "Dog.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"

int main(void) {
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* jeop = new WrongCat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	jeop->makeSound();
	delete meta;
	delete j;
	delete i;
	delete jeop;
}
