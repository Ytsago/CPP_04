#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "Wrong Animal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) : _type(other._type) {
	std::cout << "Copy constructor called" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &other) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

WrongAnimal::~WrongAnimal() {
	std::cout << "Wrong Animal destructor called" << std::endl;
}

void	WrongAnimal::makeSound() {
	std::string type[] = {"none", "wrong_cat"};
	int	i;
	for (i = 0; i < 3; i++) {
		if (this->_type == type[i])
			break ;
	}
	switch (i) {
		case 0:
			break ;
		case 1:
			std::cout << "Ssssss !" << std::endl;
			break ;
		default:
			std::cout << "Unknow animal" << std::endl;
			break ;
	}
}
