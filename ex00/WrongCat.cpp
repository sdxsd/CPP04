#include "WrongCat.hpp"

WrongCat::WrongCat(void) {
	std::cout << "WrongCat constructor called." << std::endl;
	type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& toCopy): WrongAnimal((const WrongAnimal&)toCopy) {
	std::cout << "WrongCat copy constructor called." << std::endl;
}

WrongCat::~WrongCat(void) {
	std::cout << "WrongCat destructor called." << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& toCopy) {
	std::cout << "WrongCat = operator called." << std::endl;
	this->type = toCopy.type;
	return (*this);
}

void WrongCat::makeSound(void) const {
	std::cout << "* Woem *" << std::endl;
}
