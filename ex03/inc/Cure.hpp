#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure: public AMateria {
	public:
		Cure();										//Default constructor
		~Cure();										//Destructor
		Cure(const Cure &other);				//Copy constructor
		Cure &operator=(const Cure &other);	//Copy operator
		AMateria*	clone() const;
		void use(ICharacter& target);
	private:

};
#endif
