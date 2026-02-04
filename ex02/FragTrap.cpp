#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap() : ClapTrap("default") {
  hitPoints = 100;
  energyPoints = 100;
  attackDamage = 30;
  std::cout << "FragTrap " << name << " constructed." << std::endl;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name) {
  hitPoints = 100;
  energyPoints = 100;
  attackDamage = 30;
  std::cout << "FragTrap " << name << " constructed." << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other) {
  hitPoints = other.hitPoints;
  energyPoints = other.energyPoints;
  attackDamage = other.attackDamage;
  std::cout << "FragTrap " << name << " copy constructed." << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other) {
  if (this != &other) {
    ClapTrap::operator=(other);
    hitPoints = other.hitPoints;
    energyPoints = other.energyPoints;
    attackDamage = other.attackDamage;
  }
  return *this;
}

FragTrap::~FragTrap() {
  std::cout << "FragTrap " << name << " destructed." << std::endl;
}

void FragTrap::attack(const std::string &target) {
  if (energyPoints <= 0 || hitPoints <= 0) {
    std::cout << "FragTrap " << name
              << " cannot attack due to insufficient energy or hit points."
              << std::endl;
    return;
  }
  energyPoints--;
  std::cout << "FragTrap " << name << " attacks " << target << ", causing "
            << attackDamage << " points of damage!" << std::endl;
}

void FragTrap::highFivesGuys() {
  std::cout << "FragTrap " << name << " requests a high five!" << std::endl;
}
