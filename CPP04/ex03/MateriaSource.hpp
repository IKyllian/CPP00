#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <iostream>
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public :

		MateriaSource();
		MateriaSource(const MateriaSource& src);
		~MateriaSource();

		MateriaSource& operator=(const MateriaSource& src);
		
		virtual void learnMateria(AMateria*);
		virtual AMateria* createMateria(std::string const & type);

	private :

		AMateria *_m_stock[ARRAY_SIZE];
};

#endif