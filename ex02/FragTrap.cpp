#include "FragTrap.hpp"
#include <iostream>


FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap constructor called" << std::endl;
	this->_hp = 100;
	this->_energy = 100;
	this->_damage = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}


void FragTrap::highFivesGuys(void)
{
	std::cout << "FlagTrap " << this->_name << " wants a high five!" << std::endl;
}
