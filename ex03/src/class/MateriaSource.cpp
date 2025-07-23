#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (unsigned int i = 0; i < _bookSize; i++)
		this->_book[i] = NULL;
	std::cout << "MateriaSource default constructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &other) {
	for (unsigned int i = 0; i < _bookSize; i++) {
		if (other._book[i])
			this->_book[i] = other._book[i]->clone();
		else
			this->_book[i] = NULL;
	}
	std::cout << "Copy constructor called" << std::endl;
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &other) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)	{
		for (unsigned int i = 0; i < _bookSize; i++) {
			if (this->_book[i])
				delete this->_book[i];
			if (other._book[i])
				this->_book[i] = other._book[i]->clone();
			else
				this->_book[i] = NULL;
		}
	}
	return (*this);
}
void MateriaSource::learnMateria(AMateria* m) {
	if (m == NULL) {
		std::cout << "nullptr passed you little .... " << std::endl;
		return ;
	}
	for (unsigned int i = 0; i < _bookSize; i++)
		if (this->_book[i] == NULL) {
			this->_book[i] = m->clone();
			std::cout << "Materia " << m->getType() << " learn !" << std::endl;
			delete m;
			return ;
		}
	delete m;
	std::cout << "The spellbook is full" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	for (unsigned int i = 0; i < _bookSize; i++) {
		if (this->_book[i] && this->_book[i]->getType() == type)
			return this->_book[i]->clone();
	}
	std::cout << "The spellbook does not know this materia" << std::endl;
	return NULL;
}

MateriaSource::~MateriaSource() {
	for (unsigned int i = 0; i < _bookSize; i++) {
		if (this->_book[i])
			delete this->_book[i];
	}
	std::cout << "MateriaSource destructor called" << std::endl;
}
