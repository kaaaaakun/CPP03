#include "CrapTrap.hpp"

CrapTrap::CrapTrap(std::string name)
    : Name(name), HitPoint(10), EnergyPoint(10), AttackDamage(0) {}

CrapTrap::~CrapTrap() {}

ClapTrap::ClapTrap(const ClapTrap& other)
    : Name(other.Name), HitPoints(other.HitPoints), EnergyPoints(other.EnergyPoints), AttackDamage(other.AttackDamage) {}

ClapTrap::ClapTrap& operator=(const ClapTrap& other) {
    ClapTrap::ClapTrap(other);
}

void CrapTrap::attack(const std::string& target) {
    if (EnergyPoint < 1) {
        std::cout << "Cannot attack. " << name << " has insufficient energy." << std::endl;
        return ;
    }
    std::cout << name << " attacks " << target << std::endl;
    EnergyPoint--;
}

void CrapTrap::takeDamage(unsigned int amount) {
    if (HitPoint == 0) {
        std::cout << name << " is already dead." << std::endl;
        return ;
    }
    unsigned int damage = (HitPoint < amount) ? HitPoint : amount;

    std::cout << name << " takes " << damage << " damage." << std::endl;
    HitPoint -= damage;
    if (HitPoint == 0) {
        std::cout << name << " has died." << std::endl;
    }
}

void CrapTrap::beRepaired(unsigned int amount) {
    if (HitPoint == 0) {
        std::cout << name << " is already dead." << std::endl;
        return ;
    }
    std::cout << name << " is repaired for " << amount << " points." << std::endl;
    HitPoint += amount;
}
