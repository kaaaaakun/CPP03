#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

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
  std::cout << "-------------------------------------" << std::endl;
  ScavTrap scav1("Scav1");
  ScavTrap scav2("Scav2");
  ScavTrap scav3("Scav3");
  scav1.takeDamage(60);
  scav1.takeDamage(5);
  scav1.takeDamage(40);
  scav1.beRepaired(5);
  scav1.attack("Enemy");
  for (int i = 0; i < 52; i++) {
    std::cout << i << " : ";
    scav2.attack("Enemy");
  }
  scav3.takeDamage(50);
  scav3.beRepaired(100);
  scav3.guardGate();
  scav3.takeDamage(99);

  std::cout << "-------------------------------------" << std::endl;
  FragTrap frag1("Frag1");
  FragTrap frag2("Frag2");
  FragTrap frag3("Frag3");
  frag1.takeDamage(60);
  frag1.takeDamage(5);
  frag1.takeDamage(40);
  frag1.beRepaired(5);
  frag1.attack("Enemy");
  frag2.takeDamage(99);
  for (int i = 0; i < 52; i++) {
    std::cout << i << " : ";
    frag2.attack("Enemy");
    frag2.beRepaired(1);
  }
  frag3.takeDamage(50);
  frag3.beRepaired(100);
  frag3.highFivesGuys();
  frag3.takeDamage(99);
  std::cout << "-------------------------------------" << std::endl;
}
