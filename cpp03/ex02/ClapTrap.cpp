#include "ClapTrap.hpp"

// Constructors;

ClapTrap::ClapTrap(void): _name("Default"), _energyPoints(10), _attackDamage(0), _hitPoints(10)
{
	std::cout << "ClapTrap Default Constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _energyPoints(10), _attackDamage(0), _hitPoints(10)
{
	std::cout << "ClapTrap Constructor called with name " << _name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
	*this = copy;
	std::cout << "ClapTrap Copy Constructor called" << std::endl;
}

// Destructor
ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap destructor called for " << this->_name << std::endl;
}

// Copy operator overload
ClapTrap& ClapTrap::operator=(const ClapTrap &source)
{
	std::cout << "ClapTrap copy operator called" << std::endl;
	this->_name = source._name;
	this->_hitPoints = source._hitPoints;
	this->_attackDamage = source._attackDamage;
	this->_energyPoints = source._energyPoints;
	return (*this);
}

// Public methods

void	ClapTrap::attack(const std::string& target)
{
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target << " and does " << this->_attackDamage << " points of damage." << std::endl;
		this->_energyPoints--;
	}
	else if (this->_energyPoints == 0)
		std::cout << "ClapTrap " << this->_name << " does not have enought energy points to attack." << std::endl;
	else if (this->_hitPoints <= 0)
		std::cout << "ClapTrap " << this->_name << " is dead..." << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints > amount)
	{
		this->_hitPoints -= amount;
		std::cout << "ClapTrap " << this->_name << " has taken " << amount << " points of damage. HP left : " << this->_hitPoints << std::endl;
	}
	else if (this->_hitPoints <= 0)
		std::cout << "ClapTrap " << this->_name << " is already dead... STOP attacking it!" << std::endl;
	else if (this->_hitPoints <= amount)
	{
		this->_hitPoints -= amount;
		std::cout << "ClapTrap " << this->_name << " has taken " << amount << " points of damage and is now dead... RIP" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints > 0 && this->_hitPoints > 0 && this->_hitPoints + amount <= 10)
	{
		this->_energyPoints--;
		this->_hitPoints += amount;
		std::cout << "ClaptTrap " << this->_name << " repaired himself and gained " << amount << " of hitpoints. TOTAL HP: " << this->_hitPoints << std::endl;
	}
	else if (this->_hitPoints + amount > 10)
		std::cout << "ClapTrap " << this->_name << " is not able to repair himself because he will be over the MAX HP amount." << std::endl;
	else if (this->_energyPoints <= 0)
		std::cout << "ClapTrap " << this->_name << " has no energy poitns left to repair himself. " << std::endl;
	else if (this->_hitPoints <= 0)
		std::cout << "ClapTrap " << this->_name << " is dead... He is not able to repair himself." << std::endl;
}

