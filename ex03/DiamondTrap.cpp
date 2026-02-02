#include "DiamondTrap.hpp"
#include <iostream>

// Default Constructor
DiamondTrap::DiamondTrap()
    : ClapTrap("default_clap_name"), FragTrap(), ScavTrap(), name("default") {
  this->hitPoints = FragTrap::hitPoints;
  this->energyPoints = ScavTrap::energyPoints;
  this->attackDamage = FragTrap::attackDamage;
  std::cout << "DiamondTrap Default Constructor called" << std::endl;
}

// Parametric Constructor
DiamondTrap::DiamondTrap(std::string name)
    : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name),
      name(name) {
  this->hitPoints = 100;   // FragTrap
  this->energyPoints = 50; // ScavTrap
  this->attackDamage = 30; // FragTrap
  std::cout << "DiamondTrap Parametric Constructor called for " << this->name
            << std::endl;
}

// Copy Constructor
DiamondTrap::DiamondTrap(const DiamondTrap &other)
    : ClapTrap(other), FragTrap(other), ScavTrap(other) {
  *this = other;
  std::cout << "DiamondTrap Copy Constructor called" << std::endl;
}

// Copy Assignment Operator
DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other) {
  std::cout << "DiamondTrap Assignment Operator called" << std::endl;
  if (this != &other) {
    this->name = other.name;
    this->ClapTrap::name = other.ClapTrap::name;
    this->hitPoints = other.hitPoints;
    this->energyPoints = other.energyPoints;
    this->attackDamage = other.attackDamage;
  }
  return *this;
}

// Destructor
DiamondTrap::~DiamondTrap() {
  std::cout << "DiamondTrap Destructor called for " << this->name << std::endl;
}

void DiamondTrap::whoAmI() {
  std::cout << "I really wonder who am I, am I " << name << " or am I "
            << ClapTrap::name << " I will never know for sure." << std::endl;
}