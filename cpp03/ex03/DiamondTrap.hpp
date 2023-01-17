#pragma once

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
	private:
		std::string _name;
	public:
		// constructors
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap &copy);

		// Destructor
		~DiamondTrap();

		// Operator overload
		DiamondTrap& operator=(const DiamondTrap &src);

		// Methods
		void whoAmI(void);
	//	void attack(const std::string &target);

		// Attributes
		using FragTrap::_hitPoints;
		using FragTrap::_attackDamage;
		using ScavTrap::_energyPoints;
		using ScavTrap::attack;
};
