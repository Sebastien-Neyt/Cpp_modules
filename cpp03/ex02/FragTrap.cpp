#include "FragTrap.hpp"

// Constructors

FragTrap::FragTrap(void): ClapTrap()
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap < " << this->_name << " > constructor called." << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap < " << this->_name << " > constructor called." << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy): ClapTrap(copy)
{
	std::cout << "FragTrap copy constructor called " << std::endl;
}

// Destructor

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor called for " << this->_name << std::endl;
}

// Operator = overload

FragTrap &FragTrap::operator=(const FragTrap &src)
{
	this->_name = src._name;
	this->_hitPoints = src._hitPoints;
	this->_energyPoints = src._energyPoints;
	this->_attackDamage = src._attackDamage;
	std::cout << "FragTrap Assignation operator called" << std::endl;
	return (*this);
}

// Method

void	FragTrap::highFiveGuys(void)
{
	std::cout << "FragTrap " << this->_name << " : 'Give me a high five!' \n *HIGH FIVE* \n" << std::endl;
}
