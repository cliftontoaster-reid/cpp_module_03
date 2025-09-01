# C++ Module 03: Inheritance and ClapTrap Battle Arena

This project is part of the 42 curriculum and serves as an introduction to inheritance in C++. The module is divided into three exercises, progressively building a hierarchy of robot classes starting with the basic `ClapTrap` and extending it with specialized variants. Think of it as robot evolution, but with more violence and less Darwin.

## Exercises

### Exercise 00: ClapTrap Class

This exercise introduces the `ClapTrap` class, a basic combat robot with fundamental battle capabilities.

• **Constructor & Destructor**: Proper initialization and cleanup with name assignment
• **Attack Function**: Allows the ClapTrap to attack targets and consume energy
• **Damage System**: `takeDamage()` reduces hit points when attacked
• **Repair Mechanism**: `beRepaired()` restores hit points at the cost of energy
• **Resource Management**: Hit points and energy points are tracked and limited

### Exercise 01: ScavTrap - The Enhanced ClapTrap

This exercise extends the `ClapTrap` class through inheritance, creating a more powerful variant.

• **Inheritance**: `ScavTrap` inherits from `ClapTrap` with enhanced stats
• **Improved Stats**: Higher hit points (100), energy points (50), and attack damage (20)
• **Special Ability**: `guardGate()` function for gate keeper mode
• **Polymorphism**: Overridden `attack()` function with ScavTrap-specific behavior
• **Constructor Chain**: Proper base class constructor calling

### Exercise 02: FragTrap - The Friendly Fighter

This exercise adds another specialized robot class, demonstrating multiple inheritance paths.

• **FragTrap Class**: Another `ClapTrap` derivative with unique characteristics
• **Balanced Stats**: 100 hit points, 100 energy points, and 30 attack damage
• **Social Function**: `highFivesGuys()` for positive robot interactions
• **Custom Attack**: Specialized attack behavior distinct from base and ScavTrap
• **Class Hierarchy**: Demonstrates parallel inheritance from the same base class

## How to Compile and Run

Each exercise is self-contained in its own directory (`ex00`, `ex01`, `ex02`) and includes a `Makefile`.

To compile and run an exercise:

1. Navigate to the exercise directory:

   ```bash
   cd ex01
   ```

2. Use the `Makefile` to build the executable:

   ```bash
   make
   ```

3. Run the demonstration program:

   ```bash
   ./claptrap
   ```

4. To clean up all generated files:

   ```bash
   make fclean
   ```

## About

Like Final Space's KVN but actually useful - robots that fight, break, and somehow still ask for high-fives instead of spreading managed democracy. This module teaches inheritance concepts through an epic battle arena where ClapTraps evolve into specialized combat units, each with their own personality quirks and combat abilities.
