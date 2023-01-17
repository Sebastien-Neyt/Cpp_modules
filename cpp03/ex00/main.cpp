#include "ClapTrap.hpp"

int	main(void)
{
	std::cout << "##### TEST FOR CLAPTRAP #####" << std::endl << std::endl;
	std::cout << "### CONSTRUCTING CLAPTRAPS ###\n" << std::endl;
	ClapTrap a;
	ClapTrap b("george");
	ClapTrap c("harry");
	c = a;

	std::cout << "\n# ROUTINE TESTING #\n" << std::endl;

	a.attack("george");
	b.takeDamage(10);

	b.attack("harry");
	c.attack("other ClapTrap");
	a.takeDamage(5);
	a.beRepaired(4);
	a.beRepaired(2);

	std::cout << "\n# TESTING DONE. DECONSTRUCTING #\n" << std::endl;  

	return (0);
}
