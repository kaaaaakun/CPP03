#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

void performScavTrap1Actions() {
  ScavTrap scav1("Scav1");
  scav1.takeDamage(60);
  scav1.takeDamage(5);
  scav1.takeDamage(40);
  scav1.beRepaired(5);
  scav1.attack("Enemy");
}

void performScavTrap2Actions() {
  ScavTrap scav2("Scav2");
  for (int i = 0; i < 52; i++) {
    std::cout << i << " : ";
    scav2.attack("Enemy");
  }
}

void performScavTrap3Actions() {
  ScavTrap scav3("Scav3");
  scav3.takeDamage(50);
  scav3.beRepaired(100);
  scav3.guardGate();
  scav3.takeDamage(99);
}

int main(void) {
  std::cout << "-------------------------------------" << std::endl;
  performScavTrap1Actions();
  std::cout << "-------------------------------------" << std::endl;
  performScavTrap2Actions();
  std::cout << "-------------------------------------" << std::endl;
  performScavTrap3Actions();
  std::cout << "-------------------------------------" << std::endl;
}