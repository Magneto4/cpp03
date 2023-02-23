#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>

class ClapTrap
{
protected:
	std::string	_name;
	int	_hp;
	int	_energy;
	int	_damage;

public:
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const & claptrap);
	~ClapTrap();

	ClapTrap	&operator=(ClapTrap const & src);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif
