#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal {
	public:
		Animal();										//Default constructor
		virtual	~Animal() = 0;										//Destructor
		Animal(const Animal &other);				//Copy constructor
		Animal &operator=(const Animal &other);	//Copy operator
		virtual void	makeSound() const = 0;
	protected:
		std::string _type;

};
#endif
