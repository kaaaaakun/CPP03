#include "ClapTrap.hpp"

void performNormalTest() {
  std::cout << RED << "------clap1 nomal test----------------------" << END
            << std::endl;
  ClapTrap clap1("Clap1");
  clap1.takeDamage(5);
  clap1.takeDamage(5);
  clap1.takeDamage(5);
  clap1.beRepaired(5);
  clap1.attack("Enemy");
}

void performAttackTest() {
  std::cout << RED << "------clap2 attack test----------------------" << END
            << std::endl;
  ClapTrap clap2("Clap2");
  for (int i = 0; i < 12; i++) {
    std::cout << i << " : ";
    clap2.attack("Enemy");
  }
}

void performDamageTest() {
  std::cout << RED << "------clap3 damage test----------------------" << END
            << std::endl;
  ClapTrap clap3("Clap3");
  clap3.takeDamage(100);
}

void performRepairedTest() {
  std::cout << RED << "------clap4 repaired test----------------------" << END
            << std::endl;
  ClapTrap clap4("Clap4");
  clap4.takeDamage(3);
  clap4.beRepaired(100);
  clap4.attack("Enemy");
  clap4.takeDamage(3);
  clap4.takeDamage(3);
  clap4.takeDamage(100);
  clap4.takeDamage(3);
}

int main(void) {
  performNormalTest();
  performAttackTest();
  performDamageTest();
  performRepairedTest();
}