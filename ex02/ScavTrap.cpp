#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap constructor called" << std::endl;
	this->_energy = 50;
	this->_hp = 100;
	this->_damage = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::guardGate()
{
	if (this->_hp <= 0)
		std::cout << "ClapTrap " << this->_name << " is dead." << std::endl;
	else
		std::cout << "ScavTrap " << this->_name << " entered Gate keeper mode" << std::endl;
}
