#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
  maxHitPoint_ = 100;
  HitPoint_ = maxHitPoint_;
  EnergyPoint_ = 50;
  AttackDamage_ = 20;
  std::cout << "ST " << Name_ << " is created" << std::endl;
}

ScavTrap::~ScavTrap() {
  std::cout << "ST " << Name_ << " is destroyed" << std::endl;
}

void ScavTrap::guardGate() {
  std::cout << "ST " << Name_ << " is now in Gatekeeper mode." << std::endl;
}

void ScavTrap::attack(std::string const& target) {
  std::cout << "ST " << Name_ << " attacks " << target << std::endl;
}
