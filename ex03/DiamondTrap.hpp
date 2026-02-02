#pragma once

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
private:
  std::string name;

public:
  DiamondTrap();                                    // Default Constructor
  DiamondTrap(std::string name);                    // Parametric Constructor
  DiamondTrap(const DiamondTrap &other);            // Copy Constructor
  DiamondTrap &operator=(const DiamondTrap &other); // Assignment Operator
  ~DiamondTrap();                                   // Destructor

  using ScavTrap::attack;

  void whoAmI();
};