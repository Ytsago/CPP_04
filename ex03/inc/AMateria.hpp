#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include "ICharacter.hpp"

class AMateria {
	public:
		AMateria();
		AMateria(const AMateria &other);
		AMateria &operator=(const AMateria &other);
		virtual	~AMateria();									//Destructor
		AMateria(std::string const & type);
		std::string const & getType() const;			 //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
	protected:
		std::string	_type;
};
#endif
