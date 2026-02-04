#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap()
    : name("default"), hitPoints(10), energyPoints(10), attackDamage(0) {
  std::cout << "ClapTrap " << name << " constructed." << std::endl;
}

ClapTrap::ClapTrap(const std::string &name)
    : name(name), hitPoints(10), energyPoints(10), attackDamage(0) {
  std::cout << "ClapTrap " << name << " constructed." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
    : name(other.name), hitPoints(other.hitPoints),
      energyPoints(other.energyPoints), attackDamage(other.attackDamage) {
  std::cout << "ClapTrap " << name << " copy constructed." << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
  if (this != &other) {
    name = other.name;
    hitPoints = other.hitPoints;
    energyPoints = other.energyPoints;
    attackDamage = other.attackDamage;
  }
  return *this;
}

ClapTrap::~ClapTrap() {
  std::cout << "ClapTrap " << name << " destructed." << std::endl;
}

void ClapTrap::attack(const std::string &target) {
  if (energyPoints <= 0 || hitPoints <= 0) {
    std::cout << "ClapTrap " << name
              << " cannot attack due to insufficient energy or hit points."
              << std::endl;
    return;
  }
  energyPoints--;
  std::cout << "ClapTrap " << name << " attacks " << target << ", causing "
            << attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
  if (hitPoints <= 0) {
    std::cout << "ClapTrap " << name << " is already destroyed." << std::endl;
    return;
  }
  hitPoints -= static_cast<int>(amount);
  if (hitPoints < 0) {
    hitPoints = 0;
  }
  std::cout << "ClapTrap " << name << " takes " << amount
            << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
  if (hitPoints <= 0) {
    std::cout << "ClapTrap " << name << " is already destroyed." << std::endl;
    return;
  }
  if (energyPoints <= 0) {
    std::cout << "ClapTrap " << name
              << " cannot repair due to insufficient energy." << std::endl;
    return;
  }
  energyPoints--;
  hitPoints += static_cast<int>(amount);
  std::cout << "ClapTrap " << name << " is repaired by " << amount
            << " points! Current hit points: " << hitPoints << std::endl;
}

void ClapTrap::setAttackDamage(int damage) { attackDamage = damage; }
