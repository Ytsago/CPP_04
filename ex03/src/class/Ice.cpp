#include "Ice.hpp"
#include "AMateria.hpp"

Ice::Ice() : AMateria("ice") {
	this->_type = "ice";
	std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(const Ice &other) : AMateria(other._type) {
	std::cout << "Copy constructor called" << std::endl;
}

AMateria*	Ice::clone() const {
	return (new Ice());
}

void	Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice	&Ice::operator=(const Ice &other) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		return (*this);
	return (*this);
}

Ice::~Ice() {
	std::cout << "Ice destructor called" << std::endl;
}
