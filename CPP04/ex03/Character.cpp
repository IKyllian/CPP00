#include "Character.hpp"

Character::Character(std::string name) : _index(0), _name(name)
{
	for(int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

std::string const &Character::getName() const
{
	return(this->_name);
}

void Character::equip(AMateria *m)
{
	if (_index < 4)
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
