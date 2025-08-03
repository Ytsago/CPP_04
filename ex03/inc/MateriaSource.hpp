#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
	public:
		MateriaSource();										//Default constructor
		~MateriaSource();										//Destructor
		MateriaSource(const MateriaSource &other);				//Copy constructor
		MateriaSource &operator=(const MateriaSource &other);	//Copy operator
		void learnMateria(AMateria* m);
		AMateria* createMateria(std::string const & type);
	private:
		static const unsigned int	_bookSize = 4;
		AMateria			*_book[_bookSize];
};
#endif
