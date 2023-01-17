#include "DiamondTrap.hpp"

int	main(void)
{
	std::cout << "##### TEST FOR CLAPTRAP #####" << std::endl << std::endl;
	std::cout << "### [ CONSTRUCTION CLAPTRAPS ] ###\n" << std::endl;
	ClapTrap a;
	ClapTrap b("george");
	ClapTrap c("harry");
	c = a;

	std::cout << "\n# [ TESTING CLAPTRAPS ] #\n" << std::endl;

	a.attack("george");
	b.takeDamage(10);

	b.attack("harry");
	c.attack("other ClapTrap");
	a.takeDamage(5);
	a.beRepaired(4);
	a.beRepaired(2);

	std::cout << "##### TEST FOR SCAVTRAPS #####" << std::endl << std::endl;
	std::cout << "### [ CONSTRUCTION SCAVTRAPS ] ###\n" << std::endl;

	ScavTrap d;
	ScavTrap e("ronald");

	std::cout << "\n# [TESTING SCAVTRAPS] #\n"<< std::endl;
	e.guardGate();
	e.guardGate();
	d.takeDamage(120);
	e.attack("george");
	e.takeDamage(10);
	e.beRepaired(5);
	
	std::cout << "##### TEST FOR FRAGTRAPS #####" << std::endl << std::endl;
	std::cout << "### [ CONSTRUCTION FRAGTRAPS ] ###\n" << std::endl;

	

	FragTrap f;
	FragTrap g("Cain");

	std::cout << "\n# [TESTING FRAGTRAPS] #\n" << std::endl;
	
	f.highFiveGuys();
	g.attack("george");
	g.takeDamage(99);
	f.takeDamage(100);

	std::cout << "##### TEST FOR DIAMONDTRAP #####" << std::endl << std::endl;
	std::cout << "### [ CONSTRUCTION DIAMONDTRAP ] ###\n" << std::endl;

	DiamondTrap h;
	DiamondTrap i("Dito");
	DiamondTrap j;

	j = h;

	std::cout << "\n# [TESTING DIAMONDTRAP] #\n" << std::endl;
	h.whoAmI();
	i.whoAmI();
	i.attack("george");
	j.whoAmI();

	i.guardGate();
	std::cout << "\n# TESTING DONE. DECONSTRUCTING #\n" << std::endl;  

	return (0);
}
