#include "ClapTrap.hpp"

int main(void) {
  ClapTrap clap1("Clap1");
  ClapTrap clap2("Clap2");
  ClapTrap clap3("Clap3");
  ClapTrap clap4("Clap4");

  clap1.takeDamage(5);
  clap1.takeDamage(5);
  clap1.takeDamage(5);
  clap1.beRepaired(5);
  clap1.attack("Enemy");

  for (int i = 0; i < 12; i++) {
    std::cout << i << " : ";
    clap2.attack("Enemy");
  }

  clap3.takeDamage(100);

  clap4.takeDamage(3);
  clap4.beRepaired(100);
  clap4.attack("Enemy");
  clap4.takeDamage(100);
}
