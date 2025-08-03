#include "AMateria.hpp"

AMateria::AMateria() {
	this->_type = "none";
	//std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &other) {
	(void) other;
	//std::cout << "Copy constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type) {
	this->_type = type;
}
std::string const  &AMateria::getType() const {return this->_type;}


AMateria	&AMateria::operator=(const AMateria &other) {
	//std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->_type = other._type;
	return (*this);
}


void	AMateria::use(ICharacter &target) {
	std::cout << "This does nothing to " << target.getName() << std::endl;
}


AMateria::~AMateria() {
	//std::cout << "AMateria destructor called" << std::endl;
}
