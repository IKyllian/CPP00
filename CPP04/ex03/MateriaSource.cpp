#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

MateriaSource::MateriaSource() : _index(0)
{
	for(int i = 0; i < ARRAY_SIZE; i++)
		_m_stock[i] = NULL;
}

MateriaSource::~MateriaSource() {}

MateriaSource::MateriaSource(const MateriaSource& src)
{
	*this = src;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& src)
{
	this->_index = src._index;
	for(int i = 0; i < ARRAY_SIZE; i++)
	{
		this->_m_stock[i] = NULL;
		this->_m_stock[i] = src._m_stock[i]->clone();
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria *materia)
{
	if (_index < ARRAY_SIZE)
	{
		this->_m_stock[_index] = materia;
		_index++;
	}
	else
		std::cout << "Materia Inventory full" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	if (type == "ice")
		return (new Ice());
	else if (type == "cure")
		return (new Cure());
	return (NULL);
}