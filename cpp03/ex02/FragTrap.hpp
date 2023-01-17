#pragma once 

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		// Constructors
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(const FragTrap &copy);
		
		// Deconstructor
		~FragTrap(void);

		// Overload operator -> only one that doesn't get inherited...
		FragTrap& operator=(const FragTrap &src);
		
		// Method
		void highFiveGuys(void);
};
