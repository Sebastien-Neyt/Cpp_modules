#pragma once

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	private:
		bool _guarding;
	public:
		// Constructors
		ScavTrap();
		ScavTrap(const ScavTrap &copy);
		ScavTrap(std::string name);
		
		// Destructor
		~ScavTrap();

		// Methods
		void	guardGate();
		void	attack(const std::string &target);	

		// operator overload
		ScavTrap &operator=(const ScavTrap &src);
};
