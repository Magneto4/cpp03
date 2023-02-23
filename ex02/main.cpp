#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	ft1("Cyclops");

	ft1.takeDamage(5);
	ft1.beRepaired(6);
	ft1.attack("Nimrod");

	FragTrap	ft2(ft1);
	ft2.takeDamage(120);
	ft2.attack("Mystique");
	ft2 = ft1;
	ft2.attack("Mr Sinister");
	ft2.highFivesGuys();
}