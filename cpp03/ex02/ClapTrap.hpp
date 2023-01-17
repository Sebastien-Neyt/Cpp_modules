#pragma once

#include <iostream>
#include <string>

class ClapTrap
{	
	public:
		// Constructors
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &copy);

		// Destructor
		~ClapTrap(void);

		// Copy operator overload
		ClapTrap& operator=(const ClapTrap &source);

		// Public methods;
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
	
	protected: // private -> protected
		std::string _name;
		unsigned int _energyPoints;
		unsigned int _attackDamage;
		unsigned int _hitPoints;
	
};
