#include "Character.hpp"

Character::Character(std::string name) : _index(0), _name(name)
{
	for(int i = 0; i < ARRAY_SIZE; i++)
		_inventory[i] = NULL;
}

Character::Character(const Character& src)
{
	*this = src;
}

Character& Character::operator=(const Character& src)
{
	if (this == &src)
		return (*this);
	this->_index = src._index;
	this->_name = src._name;
	for(int i = 0; i < ARRAY_SIZE; i++)
	{
		this->_inventory[i] = NULL;
		this->_inventory[i] = src._inventory[i]->clone();
	}
	return (*this);
}

std::string const &Character::getName() const
{
	return(this->_name);
}

void Character::equip(AMateria *m)
{
	if (_index < ARRAY_SIZE)
	{
		_inventory[_index] = m;
		_index++;
	}
	else
		std::cout << "Inventory is full :(" << std::endl;
}

void Character::unequip(int idx)
{
	if (idx < this->_index && idx >= 0)
	{
		this->_inventory[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < this->_index && idx >= 0)
	{
		this->_inventory[idx]->use(target);
	}
	else
		std::cout << "Index does not exist" << std::endl;
}
