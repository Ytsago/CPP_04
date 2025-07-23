#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character: public ICharacter {
	public:
		Character();										//Default constructor
		Character(std::string name);
		~Character();										//Destructor
		Character(const Character &other);				//Copy constructor
		Character &operator=(const Character &other);	//Copy operator
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
		static AMateria *_floor[4];
	private:
		AMateria*	_inventory[4];
		static const unsigned int	_invSize = 4;
};
#endif
