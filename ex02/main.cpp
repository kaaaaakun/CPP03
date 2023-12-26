#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

void performActionsFrag1() {
  FragTrap frag("Frag1");
  frag.takeDamage(60);
  frag.takeDamage(5);
  frag.takeDamage(40);
  frag.beRepaired(5);
  frag.attack("Enemy");
}

void performActionsFrag2() {
  FragTrap frag("Frag2");
  frag.takeDamage(99);
  for (int i = 0; i < 102; i += 2) {
    std::cout << i << " : ";
    frag.attack("Enemy");
    std::cout << i + 1 << " : ";
    frag.beRepaired(1);
  }
}

void performActionsFrag3() {
  FragTrap frag("Frag3");
  frag.takeDamage(50);
  frag.beRepaired(100);
  frag.highFivesGuys();
  frag.takeDamage(99);
}

int main(void) {
  std::cout << "-------------------------------------" << std::endl;
  performActionsFrag1();
  std::cout << "-------------------------------------" << std::endl;
  performActionsFrag2();
  std::cout << "-------------------------------------" << std::endl;
  performActionsFrag3();
  std::cout << "-------------------------------------" << std::endl;
}
