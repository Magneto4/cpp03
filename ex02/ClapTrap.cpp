#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap constructor called" << std::endl;
	this->_name = name;
	this->_damage = 0;
	this->_energy = 10;
	this->_hp = 10;
}

ClapTrap::ClapTrap(ClapTrap const & claptrap)
{
	std::cout << "copy constructor called" << std::endl;
	*this = claptrap;
}


ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const & src)
{
	std::cout << "Copy assignement operator called" << std::endl;
	if (this != &src)
	{
		this->_damage = src._damage;
		this->_energy = src._energy;
		this->_hp = src._hp;
		this->_name = src._name;
	}
	return (*this);
}

void ClapTrap::attack(const std::string& target)
{
	if (this->_energy < 1)
		std::cout << "ClapTrap " << this->_name << " is out of energy." << std::endl;
	else if (this->_hp <= 0)
		std::cout << "ClapTrap " << this->_name << " is dead." << std::endl;
	else
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_damage << " points of damage!" << std::endl;
		this->_energy --;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_name << " took " << amount << " points of damage!" << std::endl;
	this->_hp -= amount;
	std::cout << "Current HP = " << this->_hp << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_name << " was healed for " << amount << " health points." << std::endl;
	this->_hp += amount;
	std::cout << "Current HP = " << this->_hp << std::endl;
}
