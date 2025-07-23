#include "Animal.hpp"

Animal::Animal() : _type("none") {
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal &other) : _type(other._type) {
}

Animal	&Animal::operator=(const Animal &other) {
	std::cout << "Animal copy assignment operator called" << std::endl;
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

Animal::~Animal() {
	std::cout << "Animal destructor called" << std::endl;
}
