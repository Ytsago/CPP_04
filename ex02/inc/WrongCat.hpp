#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal {
	public:
		WrongCat();										//Default constructor
		~WrongCat();										//Destructor
		WrongCat(const WrongCat &other);				//Copy constructor
		WrongCat &operator=(const WrongCat &other);	//Copy operator
	private:

};
#endif
