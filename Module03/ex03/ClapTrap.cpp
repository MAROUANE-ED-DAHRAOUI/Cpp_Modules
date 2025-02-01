#include "ScavTrap.hpp"


// default constructor call
ClapTrap::ClapTrap() : Name("ClapTrap"), HitPoint(10), EnergyPoint(10), AttackDamage(0)
{
    std::cout << GREEN <<"default constructor call" << RESET << std::endl;
}

// constructor parameters call
ClapTrap::ClapTrap(const std::string name) : HitPoint(10), EnergyPoint(10), AttackDamage(0)
{
    std::cout << GREEN << "constructor parameters call" << RESET << std::endl;
    Name = name;
}

// copy constructor Is call
ClapTrap::ClapTrap(ClapTrap &name) 
{
    std::cout << GREEN << "copy constructor Is call \n" << RESET;
    *this = name;
}


/**
 * @brief Assignment operator overload for ClapTrap class.
 * 
 * This operator allows assigning one ClapTrap object to another.
 * It performs a deep copy of the attributes from the source object
 * to the destination object, ensuring that the two objects are independent.
 * 
 * @param name The ClapTrap object to be copied.
 * @return ClapTrap& A reference to the assigned ClapTrap object.
 */
ClapTrap& ClapTrap::operator=(const ClapTrap& name)
{
    if(this != &name)
    {
        Name = name.Name;
        HitPoint = name.HitPoint;
        EnergyPoint = name.EnergyPoint;
        AttackDamage = name.AttackDamage;
    }
    return (*this);
}

// destructor is call
ClapTrap::~ClapTrap()
{
    std::cout << GREEN << "destructor is call" << RESET << std::endl;
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
        std::cout << RED << " ClapTrap can’t do anything if it has no hit pointsor energy points left! \n" << RESET;
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
        std::cout << RED << " ClapTrap can’t do anything if it has no hit pointsor energy points left! \n" << RESET;
}
