#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
	public:
		WrongAnimal();										//Default constructor
		~WrongAnimal();										//Destructor
		WrongAnimal(const WrongAnimal &other);				//Copy constructor
		WrongAnimal &operator=(const WrongAnimal &other);	//Copy operator
		void	makeSound();
	protected:
		std::string	_type;
};
#endif
