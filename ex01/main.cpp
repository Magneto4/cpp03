#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	st1("Cyclops");

	st1.takeDamage(5);
	st1.beRepaired(6);
	st1.attack("Nimrod");

	ScavTrap	st2(st1);
	st2.takeDamage(120);
	st2.attack("Mystique");
	st2 = st1;
	st2.attack("Mr Sinister");
	st2.guardGate();
}