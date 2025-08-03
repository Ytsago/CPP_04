#include "Brain.hpp"

Brain::Brain() {
	for (int i = 0; i < _maxIdeas; i++)
		this->_ideas[i] = "blank";
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain &other) {
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = other._ideas[i];
	std::cout << "Brain copy constructor called" << std::endl;
}

Brain	&Brain::operator=(const Brain &other) {
	std::cout << "Brain copy assignment operator called" << std::endl;
	if (this != &other) {
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = other._ideas[i];
	}
	return (*this);
}

Brain::~Brain() {
	std::cout << "Brain destructor called" << std::endl;
}

void	Brain::setIdea(const int i, const std::string idea) {
	if (i < 0 || i >= _maxIdeas) {
		std::cout << "His brain is too small for this idea !" << std::endl;
		return ;
	}
	this->_ideas[i] = idea;
}

std::string	Brain::getIdea(const int i) const {
	if (i < 0 || i > _maxIdeas) {
		std::cout << "His brain is too small for this idea !" << std::endl;
		return "Blank";
	}
	return this->_ideas[i];
}
