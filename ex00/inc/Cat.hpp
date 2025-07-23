#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat: public Animal {
	public:
		Cat();										//Default constructor
		~Cat();										//Destructor
		Cat(const Cat &other);				//Copy constructor
		Cat &operator=(const Cat &other);	//Copy operator
		void	makeSound();
	private:

};
#endif
