#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

MateriaSource::MateriaSource() : _index(0)
{
	for(int i = 0; i < 4; i++)
		_m_stock[i] = NULL;
}

MateriaSource::~MateriaSource()
{

}

void MateriaSource::learnMateria(AMateria *materia)
{
	if (_index < 4)
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