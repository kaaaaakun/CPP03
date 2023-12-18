# C++ Robot Classes

This C++ program implements a hierarchy of robot classes, including `ClapTrap`, `ScavTrap`, and `FragTrap`. Each class represents a different type of robot with varying attributes and behaviors.

## ClapTrap Class

The `ClapTrap` class is a base class for robots and provides basic functionalities such as attacking, taking damage, and being repaired.

### Member Variables

- `Name`: The name of the ClapTrap.
- `maxHitPoint`: The maximum hit points.
- `HitPoint`: Current hit points.
- `EnergyPoint`: Energy points used for actions.
- `AttackDamage`: The amount of damage the ClapTrap can inflict.

### Member Functions

- `ClapTrap(std::string name)`: Constructor for creating a ClapTrap instance.
- `~ClapTrap()`: Destructor for cleaning up resources.
- `ClapTrap(const ClapTrap& other)`: Copy constructor.
- `ClapTrap& operator=(const ClapTrap& other)`: Copy assignment operator.
- `void attack(const std::string& target)`: Perform an attack.
- `void takeDamage(unsigned int amount)`: Take damage.
- `void beRepaired(unsigned int amount)`: Repair the ClapTrap.

## ScavTrap Class

The `ScavTrap` class is derived from `ClapTrap` and introduces additional functionalities, such as guarding the gate.

### Member Variables

- Inherits member variables from `ClapTrap`.

### Member Functions

- `ScavTrap(std::string name)`: Constructor for creating a ScavTrap instance.
- `~ScavTrap()`: Destructor for cleaning up resources.
- `ScavTrap(const ScavTrap& other)`: Copy constructor.
- `ScavTrap& operator=(const ScavTrap& other)`: Copy assignment operator.
- `void guardGate()`: Activate gatekeeping mode.
- `void attack(const std::string& target)`: Perform an attack.

## FragTrap Class

The `FragTrap` class is another derived class from `ClapTrap` and introduces a special action called `highFivesGuys`.

### Member Variables

- Inherits member variables from `ClapTrap`.

### Member Functions

- `FragTrap(std::string name)`: Constructor for creating a FragTrap instance.
- `~FragTrap()`: Destructor for cleaning up resources.
- `FragTrap(const FragTrap& other)`: Copy constructor.
- `FragTrap& operator=(const FragTrap& other)`: Copy assignment operator.
- `void highFivesGuys()`: Request a high five.
- `void attack(const std::string& target)`: Perform an attack.

## Building the Program

To build the program, use the provided Makefile. Execute the following commands:

```bash
cd ex02
make
./ex02
