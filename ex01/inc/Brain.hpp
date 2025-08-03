#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain {
	public:
		Brain();										//Default constructor
		~Brain();										//Destructor
		Brain(const Brain &other);				//Copy constructor
		Brain &operator=(const Brain &other);	//Copy operator
		void		setIdea(const int i, const std::string idea);
		std::string	getIdea(const int i) const;
	private:
		static const int	_maxIdeas = 100;
		std::string	_ideas[_maxIdeas];
};
#endif
