#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
    : Name(name), HitPoint(10), EnergyPoint(10), AttackDamage(0) {}

ClapTrap::~ClapTrap() {}

ClapTrap::ClapTrap(const ClapTrap& other)
    : Name(other.Name), HitPoint(other.HitPoint), EnergyPoint(other.EnergyPoint), AttackDamage(other.AttackDamage) {}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
    if (this != &other) {
        Name = other.Name;
        HitPoint = other.HitPoint;
        EnergyPoint = other.EnergyPoint;
        AttackDamage = other.AttackDamage;
    }
    return *this;
}


void ClapTrap::attack(const std::string& target) {
    if (HitPoint == 0) {
        std::cout << Name << " is already dead." << std::endl;
        return ;
    }
    if (EnergyPoint < 1) {
        std::cout << "Cannot attack. " << Name << " has insufficient energy." << std::endl;
        return ;
    }
    std::cout << Name << " attacks " << target << std::endl;
    EnergyPoint--;
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (HitPoint == 0) {
        std::cout << Name << " is already dead." << std::endl;
        return ;
    }
    unsigned int damage = (HitPoint < amount) ? HitPoint : amount;

    std::cout << Name << " takes " << damage << " damage." << std::endl;
    HitPoint -= damage;
    if (HitPoint == 0) {
        std::cout << Name << " has died." << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (HitPoint == 0) {
        std::cout << Name << " is already dead." << std::endl;
        return ;
    }
    std::cout << Name << " is repaired for " << amount << " points." << std::endl;
    HitPoint += amount;
}
