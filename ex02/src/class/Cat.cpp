#include "Cat.hpp"

Cat::Cat() : Animal() {
	this->_type = "Cat";
	this->_brain = new Brain;
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &other) {
	this->_type = other._type;
	this->_brain = new Brain(*(other._brain));
	std::cout << "Copy constructor called" << std::endl;
}

Cat	&Cat::operator=(const Cat &other) {
	std::cout << "Cat copy assignment operator called" << std::endl;
	if (this != &other) {
		this->_type = other._type;
		*this->_brain = *other._brain;
	}
	return (*this);
}

void	Cat::makeSound() const {
	std::cout << "Meow !!" << std::endl;
}

Cat::~Cat() {
	delete this->_brain;
	std::cout << "cat destructor called" << std::endl;
}
