#include "Dog.hpp"
#include "Animal.hpp"

Dog::Dog() : Animal() {
	this->_type = "Dog";
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &other) {
	this->_type = other._type;
	std::cout << "Copy constructor called" << std::endl;
}

Dog	&Dog::operator=(const Dog &other) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
}

void	Dog::makeSound() {
	std::cout << "Woof !" << std::endl;
}
