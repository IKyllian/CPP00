#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

MateriaSource::MateriaSource()
{
	for(int i = 0; i < ARRAY_SIZE; i++)
		_m_stock[i] = NULL;
}

MateriaSource::~MateriaSource()
{
	for(int i = 0; i < ARRAY_SIZE; i++)
	{
		if (this->_m_stock[i])
		{
			delete this->_m_stock[i];
			this->_m_stock[i] = NULL;
		}
	}
}

MateriaSource::MateriaSource(const MateriaSource& src)
{
	*this = src;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& src)
{
	if (this == &src)
		return (*this);
	for(int i = 0; i < ARRAY_SIZE; i++)
	{
		if (this->_m_stock[i])
		{
			delete this->_m_stock[i];
			this->_m_stock[i] = NULL;
		}
		if (src._m_stock[i])
			this->_m_stock[i] = src._m_stock[i]->clone();
		else
			this->_m_stock[i] = NULL;
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria *materia)
{
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		if (this->_m_stock[i] == NULL)
		{
			this->_m_stock[i] = materia;
			break;
		}
		if (i == (ARRAY_SIZE - 1))
			std::cout << "Materia Inventory full" << std::endl;
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	if (type == "ice")
		return (new Ice());
	else if (type == "cure")
		return (new Cure());
	return (NULL);
}