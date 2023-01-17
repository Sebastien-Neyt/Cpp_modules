#include "ScavTrap.hpp"

// Constructors

ScavTrap::ScavTrap(): ClapTrap()
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	this->_guarding = false;
	std::cout << "ScavTrap < " << this->_name << " > has joined the fight!" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	this->_guarding = false;
	std::cout << "ScavTrap < " << this->_name << " > has joined the fight!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy): ClapTrap(copy)
{
	this->_guarding = false;
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

// Destructors

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called for " << this->_name << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &src)
{
	std::cout << "ScavTrap assignation operator called" << std::endl;
	this->_name = src._name;
	this->_hitPoints = src._hitPoints;
	this->_energyPoints = src._energyPoints;
	this->_attackDamage = src._attackDamage;
	this->_guarding = src._guarding;
	return (*this);
}

// Methods
void    ScavTrap::attack(const std::string &target)
{
        if (this->_energyPoints > 0 && this->_hitPoints > 0)
        {
                std::cout << "ScavTrap " << this->_name << " attacks " << target << " and does " << this->_attackDamage << " points of damage." << std::endl;
                this->_energyPoints--;
        }
        else if (this->_energyPoints == 0)
                std::cout << "ScavTrap " << this->_name << " does not have enought energy points to attack." << std::endl;
        else if (this->_hitPoints <= 0)
                std::cout << "ScavTrap " << this->_name << " is dead..." << std::endl;
}

void	ScavTrap::guardGate()
{
	if (!this->_guarding)
	{
		this->_guarding = true;
		std::cout << "ScavTrap " << this->_name << " is now guarding the gate." << std::endl;
	}
	else
		std::cout << "ScavTrap " << this->_name << " was already guarding the gate." << std::endl;
	
}
