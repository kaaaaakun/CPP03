#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
  maxHitPoint_ = 100;
  HitPoint_ = maxHitPoint_;
  EnergyPoint_ = 100;
  AttackDamage_ = 30;
  std::cout << "FT " << Name_ << " is created" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) 
: ClapTrap(other) {
	maxHitPoint_ = other.maxHitPoint_;
	HitPoint_ = other.HitPoint_;
	EnergyPoint_ = other.EnergyPoint_;
	AttackDamage_ = other.AttackDamage_;
  std::cout << "FT " << Name_ << " is copied" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other) {
	if (this != &other) {
		ClapTrap::operator=(other);
	}
	return *this;
}

FragTrap::~FragTrap() {
  std::cout << "FT " << Name_ << " is destroyed" << std::endl;
}

void FragTrap::highFivesGuys() {
	if (HitPoint_ == 0) {
		std::cout << "FT " << Name_ << " is dead" << std::endl;
		return ;
	}
    std::cout << "Hey guys, give me a high five!" << std::endl;
}

void FragTrap::attack(std::string const& target) {
  if (HitPoint_ == 0) {
    std::cout << Name_ << " is already dead." << std::endl;
    return;
  }
  if (EnergyPoint_ < 1) {
    std::cout << "Cannot attack. " << Name_ << " has insufficient energy."
              << std::endl;
    return;
  }
std::cout << "FT " << Name_ << " attacks, dealing " << AttackDamage_ << " damage to " << target << std::endl;
  EnergyPoint_--;
}
