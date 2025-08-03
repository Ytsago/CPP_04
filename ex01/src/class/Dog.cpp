#include "Dog.hpp"
#include "Animal.hpp"

Dog::Dog() : Animal() {
	this->_type = "Dog";
	this->_brain = new Brain;
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &other) {
	this->_brain = new Brain(*(other._brain));
	this->_type = other._type;
	std::cout << "Copy constructor called" << std::endl;
}

Dog	&Dog::operator=(const Dog &other) {
	std::cout << "Dog copy assignment operator called" << std::endl;
	if (this != &other) {
		this->_type = other._type;
		*this->_brain = *other._brain;
	}
	return (*this);
}

Dog::~Dog() {
	delete this->_brain;
	std::cout << "Dog destructor called" << std::endl;
}

void	Dog::makeSound() {
	std::cout << "Woof !" << std::endl;
}

Brain*	Dog::getBrain() const {
	return this->_brain;
}
