#include "Cat.hpp"

Cat::Cat() : Animal() {
	this->_type = "Cat";
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &other) {
	this->_type = other._type;
	std::cout << "Copy constructor called" << std::endl;
}

Cat	&Cat::operator=(const Cat &other) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

Cat::~Cat() {
	std::cout << "cat destructor called" << std::endl;
}

void	Cat::makeSound() {
	std::cout << "Meow !" << std::endl;
}
