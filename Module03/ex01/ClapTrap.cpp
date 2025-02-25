#include "ScavTrap.hpp"

ClapTrap::ClapTrap() : Name("ClapTrap"), HitPoint(10), EnergyPoint(10), AttackDamage(0)
{
    std::cout << GREEN <<"Claptrap default constructor called" << RESET << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) : HitPoint(10), EnergyPoint(10), AttackDamage(0)
{
    std::cout << GREEN << "ClapTrap constructor parameters called" << RESET << std::endl;
    this->Name = name;
}

ClapTrap::ClapTrap(const ClapTrap &name) 
{
    std::cout << GREEN << "ClapTrap copy constructor Is called \n" << RESET;
    *this = name;
}

// destructor is call
ClapTrap::~ClapTrap()
{
    std::cout << GREEN << "ClapTrap destructor is called" << RESET << std::endl;
}

/**
 * @brief Attacks the specified target.
 * 
 * This function allows the ClapTrap to attack the specified target.
 * The attack can only be performed if the ClapTrap has both hit points and energy points
 * greater than zero. If the ClapTrap has no hit points or energy points left, it will output
 * a message indicating that it cannot take any action.
 * 
 * @param target The target to be attacked.
 */
void   ClapTrap::attack(const std::string &target)
{
    if(HitPoint > 0 && EnergyPoint > 0)
    {
            std::cout << RED <<"ClapTrap " << RESET << BOLD << Name << RESET 
                << RED << " Attacks " << RESET << BOLD << target << RESET << 
                RED << " causing " << RESET << BOLD << AttackDamage << RESET 
                    << RED <<" points of domage!" << RESET << std::endl;
            EnergyPoint--;
    }
    else
        std::cout << RED << " ClapTrap can’t do anything if it has no hit pointsor energy points left! \n" << RESET;
}


/**
 * @brief Takes the specified amount of damage.
 * 
 * This function allows the ClapTrap to take the specified amount of damage.
 * The damage can only be taken if the ClapTrap has both hit points and energy points
 * greater than zero. If the ClapTrap has no hit points or energy points left, it will output
 * a message indicating that it cannot take any action.
 * 
 * @param amount The amount of damage to be taken.
 */
void ClapTrap::takeDamage(unsigned int amount)
{
    if(HitPoint > 0 && EnergyPoint > 0)
    {
        HitPoint -= amount;
        std::cout << RED <<"ClapTrap " << RESET << BOLD << Name 
        << RESET << RED << " take damage new hit points" << RESET << BOLD << HitPoint << RESET << std::endl;
        return ;
    }
    else
        std::cout << RED << "ClapTrap can’t do anything if it has no hit pointsor energy points left! \n" << RESET;
}

/**
 * @brief Repairs the ClapTrap, restoring the specified amount of hit points and attack damage.
 * 
 * This function repairs the ClapTrap, restoring the specified amount of hit points and attack damage.
 * The repair can only be performed if the ClapTrap has both hit points and energy points greater than zero.
 * If the ClapTrap has no hit points or energy points left, it will output a message indicating that it cannot
 * take any action.
 * 
 * @param amount The amount of hit points and attack damage to be restored.
 */
void ClapTrap::beRepaired(unsigned int amount)
{
    if(HitPoint > 0 && EnergyPoint > 0)
    {
        std::cout << RED << "ClapTrap " <<  RESET << Name << RED << " repairs itself, restoring " <<  RESET << BOLD << amount << RESET 
            << RED << " points of damage" RESET << std::endl;
        HitPoint += amount;
        AttackDamage += amount;
    }
    else
        std::cout << MAGENTA << "ClapTrap can’t do anything if it has no hit pointsor energy points left! \n" << RESET;
}
