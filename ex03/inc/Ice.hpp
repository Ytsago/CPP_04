#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice: public AMateria {
	public:
		Ice();										//Default constructor
		~Ice();										//Destructor
		Ice(const Ice &other);				//Copy constructor
		Ice &operator=(const Ice &other);	//Copy operator
		AMateria*	clone() const;
		void use(ICharacter& target);
	private:

};
#endif
