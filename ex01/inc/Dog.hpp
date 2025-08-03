#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal {
	public:
		Dog();										//Default constructor
		~Dog();										//Destructor
		Dog(const Dog &other);				//Copy constructor
		Dog &operator=(const Dog &other);	//Copy operator
		void	makeSound();
		Brain*	getBrain() const;
	private:
		Brain	*_brain;
};
#endif
