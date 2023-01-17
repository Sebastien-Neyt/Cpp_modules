#include "DiamondTrap.hpp"

// Constructors
DiamondTrap::DiamondTrap(): ClapTrap("default_clap_name")
{
	this->_name = "default";
	//this->_hitPoints = FragTrap::_hitPoints;
	//this->_energyPoints = ScavTrap::_energyPoints;
	//this->_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap Default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name")
{
	this->_name = name;
	//this->_hitPoints = FragTrap::_hitPoints;
	//this->_energyPoints = ScavTrap::_energyPoints;
	//this->_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap constructor called for " << this->_name << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy): ClapTrap(copy), ScavTrap(copy), FragTrap(copy)
{
	*this = copy;
	std::cout << "DiamondTrap Copy constructor called" << std::endl;
}

// Destructor
DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called for " << this->_name << std::endl;
}

// Operator overload
DiamondTrap& DiamondTrap::operator=(const DiamondTrap &src)
{
	this->_name = src._name + "_clap_name";
	this->_hitPoints = src._hitPoints;
	this->_energyPoints = src._energyPoints;
	this->_attackDamage = src._attackDamage;
	std::cout << "DiamondTrap Assignation operator called" << std::endl;
	return (*this);	
}

// methods
/*void	DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}
*/
void	DiamondTrap::whoAmI(void)
{
	std::cout << "I am a DiamondTrap and my name is " << this->_name << ". I evolved from the ClapTrap named : " << ClapTrap::_name << std::endl;
}
