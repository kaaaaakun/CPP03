#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP

#include <iostream>

class ClapTrap {
 protected:
  std::string Name_;
  unsigned int maxHitPoint_;

  unsigned int HitPoint_;
  unsigned int EnergyPoint_;
  unsigned int AttackDamage_;

 public:
  ClapTrap(std::string name);
  ~ClapTrap();
  ClapTrap(const ClapTrap &other);
  ClapTrap &operator=(const ClapTrap &other);

  void attack(const std::string &target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);
};

#endif
