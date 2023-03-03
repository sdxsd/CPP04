#include "Dog.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"

int main(void) {
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* jeop = new WrongCat();
	std::cout << "i->getType(): " << i->getType() << std::endl;
	std::cout << "j->getType(): " << j->getType() << std::endl;
	std::cout << "meta->getType(): " << meta->getType() << std::endl;
	std::cout << "Cat says: ";
	i->makeSound(); //will output the cat sound!
	std::cout << "Dog says: ";
	j->makeSound();
	std::cout << "Meta says: ";
	meta->makeSound();
	std::cout << "The WrongCat says: ";
	jeop->makeSound();
	std::cout << "When it should be saying: * woem *" << std::endl;
	delete meta;
	delete j;
	delete i;
	delete jeop;
}
