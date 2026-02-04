#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main() {
  std::cout << "Welcome to the Epic ClapTrap Battle Arena!" << std::endl;

  ClapTrap hero("Hero");
  ClapTrap villain("Villain");
  ClapTrap sidekick("Sidekick");
  ClapTrap boss("Boss");
  ScavTrap scavenger("Scavenger");
  FragTrap frag("Fraggy");
  DiamondTrap diamond("Diamond");

  hero.setAttackDamage(5);
  villain.setAttackDamage(6);
  sidekick.setAttackDamage(4);
  boss.setAttackDamage(8);

  std::cout << "\nThe arena lights dim, and the crowd roars as four ClapTraps "
               "enter the battlefield!"
            << std::endl;

  // Round 1
  std::cout << "\n=== ROUND 1 ===" << std::endl;
  std::cout << "The Hero charges forward with righteous fury!" << std::endl;
  hero.attack("Villain");
  villain.takeDamage(5);

  std::cout << "The Villain retaliates with a sinister grin!" << std::endl;
  villain.attack("Hero");
  hero.takeDamage(6);

  // Round 2
  std::cout << "\n=== ROUND 2 ===" << std::endl;
  std::cout << "The Sidekick leaps in to support the Hero!" << std::endl;
  sidekick.attack("Boss");
  boss.takeDamage(4);

  std::cout << "The Boss unleashes a devastating counterattack!" << std::endl;
  boss.attack("Sidekick");
  sidekick.takeDamage(8);

  // ScavTrap special ability
  std::cout << "\n=== SCAVTRAP SPECIAL ABILITY ===" << std::endl;
  std::cout << "The Scavenger activates its special mode!" << std::endl;
  scavenger.guardGate();

  std::cout << "The Scavenger attacks with ScavTrap power!" << std::endl;
  scavenger.attack("Boss");
  boss.takeDamage(20);

  // FragTrap special ability
  std::cout << "\n=== FRAGTRAP SPECIAL ABILITY ===" << std::endl;
  std::cout << "The Fraggy unleashes its FragTrap power!" << std::endl;
  frag.attack("Villain");
  villain.takeDamage(30);

  std::cout << "Fraggy requests a high five from the crowd!" << std::endl;
  frag.highFivesGuys();

  // DiamondTrap special ability
  std::cout << "\n=== DIAMONDTRAP SPECIAL ABILITY ===" << std::endl;
  std::cout << "The mighty Diamond enters the arena!" << std::endl;
  diamond.whoAmI();

  std::cout << "Diamond attacks with immense power!" << std::endl;
  diamond.attack("Boss");
  boss.takeDamage(30);

  std::cout << "Diamond reveals their identity once more!" << std::endl;
  diamond.whoAmI();

  // Repair phase
  std::cout << "\n=== REPAIR PHASE ===" << std::endl;
  std::cout << "The Hero takes a moment to repair himself." << std::endl;
  hero.beRepaired(3);

  std::cout << "The Villain cackles as he repairs his wounds." << std::endl;
  villain.beRepaired(2);

  // Final round
  std::cout << "\n=== FINAL ROUND ===" << std::endl;
  std::cout << "The Hero and Sidekick team up against the Villain!"
            << std::endl;
  hero.attack("Villain");
  villain.takeDamage(5);

  sidekick.attack("Villain");
  villain.takeDamage(4);

  std::cout << "The Boss finishes the Villain with a powerful strike!"
            << std::endl;
  boss.attack("Villain");
  villain.takeDamage(8);

  // DiamondTrap final attack
  std::cout << "\n=== DIAMONDTRAP FINISHER ===" << std::endl;
  std::cout << "Diamond delivers the final blow to the Boss!" << std::endl;
  diamond.attack("Boss");
  boss.takeDamage(25);

  std::cout << "\nThe battle concludes! The arena echoes with cheers and boos."
            << std::endl;
  std::cout << "Heroes and villains alike stand victorious... for now."
            << std::endl;

  return 0;
}
