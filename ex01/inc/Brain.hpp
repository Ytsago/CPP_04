#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain {
	public:
		Brain();										//Default constructor
		~Brain();										//Destructor
		Brain(const Brain &other);				//Copy constructor
		Brain &operator=(const Brain &other);	//Copy operator
	private:
		std::string	_idea[100];
};
#endif
