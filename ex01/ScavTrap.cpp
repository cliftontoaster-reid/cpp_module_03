#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name) {
  hitPoints = 100;
  energyPoints = 50;
  attackDamage = 20;
  std::cout << "ScavTrap " << name << " constructed." << std::endl;
}

ScavTrap::~ScavTrap() {
  std::cout << "ScavTrap " << name << " destructed." << std::endl;
}

void ScavTrap::attack(const std::string &target) {
  if (energyPoints <= 0 || hitPoints <= 0) {
    std::cout << "ScavTrap " << name
              << " cannot attack due to insufficient energy or hit points."
              << std::endl;
    return;
  }
  energyPoints--;
  std::cout << "ScavTrap " << name << " attacks " << target << ", causing "
            << attackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate() {
  std::cout << "ScavTrap " << name << " is now in Gate keeper mode."
            << std::endl;
}
