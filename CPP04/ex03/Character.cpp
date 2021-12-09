#include "Character.hpp"

Character::Character(std::string name) : _name(name)
{
	for(int i = 0; i < ARRAY_SIZE; i++)
		_inventory[i] = NULL;
}

Character::Character(const Character& src)
{
	this->_name = src._name;
	for(int i = 0; i < ARRAY_SIZE; i++)
	{
		if (src._inventory[i])
			this->_inventory[i] = src._inventory[i]->clone();
		else
			this->_inventory[i] = NULL;
	}
}

Character::~Character()
{
	for(int i = 0; i < ARRAY_SIZE; i++)
	{
		if (this->_inventory[i])
		{
			delete this->_inventory[i];
			this->_inventory[i] = NULL;
		}
	}
}

Character& Character::operator=(const Character& src)
{
	if (this == &src)
		return (*this);
	this->_name = src._name;
	for(int i = 0; i < ARRAY_SIZE; i++)
	{
		if (this->_inventory[i])
		{
			delete this->_inventory[i];
			this->_inventory[i] = NULL;
		}
		if (src._inventory[i])
			this->_inventory[i] = src._inventory[i]->clone();
		else
			this->_inventory[i] = NULL;
	}
	return (*this);
}

std::string const &Character::getName() const
{
	return(this->_name);
}

void Character::equip(AMateria *m)
{
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			return ;
		}
		if (i == (ARRAY_SIZE - 1))
			std::cout << "Inventory is full" << std::endl;
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx <= 3)
		this->_inventory[idx] = NULL;
	else
		std::cout << "Index should be between 0 and 3" << std::endl;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx <= 3)
	{
		if (this->_inventory[idx] != NULL)
			this->_inventory[idx]->use(target);
		else
			std::cout << "No materia on this index" << std::endl;
	}
	else
		std::cout << "Index should be between 0 and 3" << std::endl;
}
