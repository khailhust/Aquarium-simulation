# Aquarium-simulation

# Design Documentation

This design documentation describes the design of the `Fish` and `Aquarium` classes in the given code, explaining the purpose and functionality of each object and the rationale behind their design choices.

## Fish Class
The `Fish` class represents a fish in an aquarium. It has the following attributes and methods:

### Attributes:
- `name` (string): Stores the name of the fish.
- `health` (integer): Represents the health of the fish.

### Methods:
- `Fish(const std::string& name, int health)`: Constructor that initializes the fish object with a name and health value.
- `const std::string& getName() const`: Returns the name of the fish.
- `int getHealth() const`: Returns the health of the fish.
- `void bite(Fish& other_fish)`: Represents a fish biting another fish. It determines the outcome of the bite based on the health of the fish involved and updates their health accordingly.
- `void weaken()`: Simulates the weakening of the fish over time by reducing its health. The weakening factor is calculated based on the current health of the fish.
- `bool isAlive()`: Checks if the fish is alive by evaluating its health. Returns true if the health is greater than zero, indicating that the fish is alive.
- `void fishStatus() const`: Prints the status of the fish, including its name and health.

#### Rationale:
- The `Fish` class is designed to encapsulate the behavior and attributes of an individual fish in the aquarium.
- The `name` and `health` attributes are stored as private member variables to ensure encapsulation and data integrity.
- The `bite()` method allows one fish to bite another, implementing the logic for determining the outcome of the bite based on the health of the fish involved.
- The `weaken()` method simulates the gradual weakening of the fish over time by reducing its health. The weakening factor is calculated based on the current health of the fish, providing a mechanism to simulate the fish's health degradation.
- The `isAlive()` method helps to determine whether the fish is alive or not based on its health.
- The `fishStatus()` method is provided to display the current status of the fish, allowing for easy monitoring and debugging.

## Aquarium Class
The `Aquarium` class represents a collection of fish in an aquarium. It manages the fishes and simulates their interactions. It has the following attributes and methods:

### Attributes:
- `fishes` (vector of `Fish` objects): Stores the collection of fish in the aquarium.

### Methods:
- `void addFish(const Fish& fish)`: Adds a fish object to the aquarium's collection of fishes.
- `void simulate(int num_rounds)`: Simulates the interactions among the fishes in the aquarium for the specified number of rounds. It weakens the fishes, displays their statuses, and allows them to bite each other based on specific conditions.
- `void printStatus() const`: Prints the current status of all the fish in the aquarium.

#### Rationale:
- The `Aquarium` class is designed to manage a collection of fish and simulate their interactions within the aquarium.
- The `fishes` attribute is a vector that stores `Fish` objects, providing a convenient container for managing the fishes.
- The `addFish()` method allows adding a `Fish` object to the aquarium's collection.
- The `simulate()` method drives the simulation of fish interactions by iterating through the specified number of rounds. It weakens each fish, displays

 their statuses, and allows them to bite each other based on certain conditions.
- The `printStatus()` method prints the current status of all the fish in the aquarium, allowing for easy monitoring and observation of their health.

#### Rationale:
- The design separates the responsibilities of managing individual fish (`Fish` class) and managing the collection of fishes and their interactions (`Aquarium` class).
- Encapsulation is maintained by using appropriate access modifiers to control access to the member variables and providing accessors to retrieve their values.
- The design allows for scalability by adding new fish objects to the aquarium dynamically using the `addFish()` method.
- The `simulate()` method provides a way to simulate and observe the interactions among the fish for a specified number of rounds, facilitating the study of their behavior.
- The `printStatus()` method enables easy monitoring of the health status of all the fish in the aquarium.

This concludes the design documentation for the `Fish` and `Aquarium` classes. The design aims to provide a clear separation of responsibilities, encapsulation of data, and support for simulating and monitoring the fish interactions in the aquarium.
