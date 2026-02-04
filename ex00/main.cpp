#include "ClapTrap.hpp"

#include <iostream>

int main() {
  std::cout << "Welcome to the Epic ClapTrap Battle Arena!" << std::endl;

  ClapTrap hero("Hero");
  ClapTrap villain("Villain");
  ClapTrap sidekick("Sidekick");
  ClapTrap boss("Boss");

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

  std::cout << "\nThe battle concludes! The arena echoes with cheers and boos."
            << std::endl;
  std::cout << "Heroes and villains alike stand victorious... for now."
            << std::endl;

  return 0;
}
