#include "Character.hpp"

AMateria* Character::_floor[4] = {NULL, NULL, NULL, NULL};

Character::Character() {
	this->_name = "Kevin";
	for (unsigned int i = 0; i < _invSize; i++) 
		this->_inventory[i] = NULL;
	//std::cout << "Charachter default constructor called" << std::endl;
}

Character::Character(std::string name) {
	this->_name = name;
	for (unsigned int i = 0; i < _invSize; i++) 
		this->_inventory[i] = NULL;
	//std::cout << "Character overload constructor called" << std::endl;
}

Character::Character(const Character &other) {
	this->_name = other._name;
	for (unsigned int i = 0; i < _invSize; i++) {
		if (other._inventory[i])
			this->_inventory[i] = other._inventory[i]->clone();
		else
			this->_inventory[i] = NULL;
	}
	//std::cout << "Copy constructor called" << std::endl;
}

Character	&Character::operator=(const Character &other) {
	//std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other) {
		for (unsigned int i = 0; i < _invSize; i++) {
			if (this->_inventory[i])
				delete this->_inventory[i];
			if (other._inventory[i])
				this->_inventory[i] = other._inventory[i]->clone();
			else
				this->_inventory[i] = NULL;
		}
		this->_name = other._name;
	}
	return (*this);
}

std::string const	&Character::getName() const {
	return this->_name;
}

void	Character::equip(AMateria* m) {
	for (unsigned int i = 0; i < _invSize; i++)
		if (this->_inventory[i] == NULL) {
			this->_inventory[i] = m;
			//std::cout << "Materia equiped !" << std::endl;
			return ;
		}
	std::cout << "Inventory full." << std::endl;
	return ;
}

void	wipe_floor(AMateria* _floor[4]) {
	for (unsigned int i = 0; i < 4; i++) {
		if (_floor[i])
			delete _floor[i];
		_floor[i] = NULL;
	}
}

void	throw_floor(AMateria *_floor[4], AMateria *m) {
	for (unsigned int i = 0; i < 4; i++) {
		if (_floor[i] == NULL) {
			_floor[i] = m;
			return ;
		}
	}
	wipe_floor(_floor);
	_floor[0] = m;
}

void	Character::unequip(int idx) {
	if (idx < 0 || idx >= static_cast<int>(_invSize)) {
		std::cout << "Invalid idx." << std::endl;
		return ;
	}
	if (this->_inventory[idx]) {
		std::cout << "Materia " << this->_inventory[idx]->getType() << " unequiped" << std::endl;
		throw_floor(_floor, this->_inventory[idx]);
		this->_inventory[idx] = NULL;
		return ;
	}
	std::cout << "No materia equiped at this slot" << std::endl;
	return ;
}

void	Character::use(int idx, ICharacter& target) {
	if (idx < 0 || idx >= static_cast<int>(_invSize)) {
		std::cout << "Invalid idx." << std::endl;
		return ;
	}
	if (this->_inventory[idx]) {
		this->_inventory[idx]->use(target);
		return ;
	}
	std::cout << "No materia equiped at this slot" << std::endl;
}

Character::~Character() {	
	for (unsigned int i = 0; i < _invSize; i++) {
		if (this->_inventory[i])
			delete this->_inventory[i];
		this->_inventory[i] = NULL;
	}
	wipe_floor(_floor);
//	std::cout << "Character destructor called" << std::endl;
}
