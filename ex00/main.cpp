#include "ClapTrap.hpp"

int main(void) {
  ClapTrap clap1("Clap1");
  ClapTrap clap2("Clap2");
  ClapTrap clap3("Clap3");
  ClapTrap clap4("Clap4");

  std::cout << RED <<"------clap1 nomal test----------------------" << END << std::endl;
  clap1.takeDamage(5);
  clap1.takeDamage(5);
  clap1.takeDamage(5);
  clap1.beRepaired(5);
  clap1.attack("Enemy");

  std::cout << RED << "------clap2 attack test----------------------" << END <<std::endl;
  for (int i = 0; i < 12; i++) {
    std::cout << i << " : ";
    clap2.attack("Enemy");
  }

  std::cout << RED << "------clap3 damage test----------------------" << END << std::endl;
  clap3.takeDamage(100);

  std::cout << RED << "------clap4 repaired test----------------------" << END << std::endl;
  clap4.takeDamage(3);
  clap4.beRepaired(100);
  clap4.attack("Enemy");
  clap4.takeDamage(100);
}
