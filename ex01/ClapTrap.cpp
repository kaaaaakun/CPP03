#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
    : Name_(name),
      maxHitPoint_(10),
      HitPoint_(10),
      EnergyPoint_(10),
      AttackDamage_(0) {
  std::cout << "ClapTrap " << Name_ << " is created." << std::endl;
}

ClapTrap::~ClapTrap() {
  std::cout << "ClapTrap " << Name_ << " is destroyed." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
    : Name_(other.Name_),
      maxHitPoint_(other.maxHitPoint_),
      HitPoint_(other.HitPoint_),
      EnergyPoint_(other.EnergyPoint_),
      AttackDamage_(other.AttackDamage_) {}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
  if (this != &other) {
    Name_ = other.Name_;
    HitPoint_ = other.HitPoint_;
    EnergyPoint_ = other.EnergyPoint_;
    AttackDamage_ = other.AttackDamage_;
  }
  return *this;
}

void ClapTrap::attack(const std::string &target) {
  if (HitPoint_ == 0) {
    std::cout << Name_ << " is already dead." << std::endl;
    return;
  }
  if (EnergyPoint_ < 1) {
    std::cout << "Cannot attack. " << Name_ << " has insufficient energy."
              << std::endl;
    return;
  }
  std::cout << Name_ << " attacks " << target << std::endl;
  EnergyPoint_--;
}

void ClapTrap::takeDamage(unsigned int amount) {
  if (HitPoint_ == 0) {
    std::cout << Name_ << " is already dead." << std::endl;
    return;
  }
  unsigned int damage = (HitPoint_ < amount) ? HitPoint_ : amount;

  std::cout << Name_ << " takes " << damage << " damage." << std::endl;
  HitPoint_ -= damage;
  if (HitPoint_ == 0) {
    std::cout << Name_ << " has died." << std::endl;
  }
}

void ClapTrap::beRepaired(unsigned int amount) {
  if (EnergyPoint_ < 1) {
    std::cout << "Cannot attack. " << Name_ << " has insufficient energy."
              << std::endl;
    return;
  }
  if (HitPoint_ == 0) {
    std::cout << Name_ << " is already dead." << std::endl;
    return;
  }
  if (maxHitPoint_ == HitPoint_) {
    std::cout << Name_ << " is fully repaired" << std::endl;
    return;
  }
  if (maxHitPoint_ <= HitPoint_ + amount) {
    std::cout << Name_ << " is repaired for " << maxHitPoint_ - HitPoint_
              << " points." << std::endl;
    HitPoint_ = maxHitPoint_;
  } else {
    std::cout << Name_ << " is repaired for " << amount << " points."
              << std::endl;
    HitPoint_ += amount;
  }
  EnergyPoint_--;
}
