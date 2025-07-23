#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {
	this->_type = "wrong_cat";
	std::cout << "Wrong cat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) {
	(void) other;
	std::cout << "Copy constructor called" << std::endl;
}

WrongCat	&WrongCat::operator=(const WrongCat &other) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		return (*this);
	return (*this);
}

WrongCat::~WrongCat() {
	std::cout << "Wrong cat destructor called" << std::endl;
}

void	WrongCat::makeSound() {
	std::cout << "Ssssss !" << std::endl;
}
