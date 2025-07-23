#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
	std::cout << "Cure default constructor called" << std::endl;
}

AMateria*	Cure::clone() const {
	return (new Cure());
}

Cure::Cure(const Cure &other) : AMateria(other._type) {
	std::cout << "Copy constructor called" << std::endl;
}

void	Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

Cure	&Cure::operator=(const Cure &other) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		return (*this);
	return (*this);
}

Cure::~Cure() {
	std::cout << "Cure destructor called" << std::endl;
}
