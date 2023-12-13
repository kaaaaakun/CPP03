#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

#include <iostream>

class ClapTrap {
private:
    std::string Name;
    unsigned int HitPoint;
    unsigned int EnergyPoint;
    unsigned int AttackDamage;

public:
    ClapTrap(std::string name);
    ~ClapTrap();
    ClapTrap(const ClapTrap& other);
    ClapTrap& operator=(const ClapTrap& other);

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif
