#ifndef CRAP_TRAP_HPP
# define CRAP_TRAP_HPP

class ClapTrap {
private:
    std::string name;
    int HitPoint;
    int EnergyPoint;
    int AttackDamage;

public:
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif
