#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog: public Animal {
	public:
		Dog();										//Default constructor
		~Dog();										//Destructor
		Dog(const Dog &other);				//Copy constructor
		Dog &operator=(const Dog &other);	//Copy operator
		void	makeSound();
	private:

};
#endif
