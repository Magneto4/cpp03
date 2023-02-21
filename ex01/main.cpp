#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	ct1("Cyclops");

	ct1.takeDamage(5);
	ct1.beRepaired(6);
	for (int i = 0; i < 10; i ++)
		ct1.attack("Nimrod");

	ClapTrap	ct2(ct1);
	ct2.takeDamage(1);
	ct2.attack("Mystique");
}