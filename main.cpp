#include <iostream>
#include <cstdlib>
#include <ctime>
#include "fish.h"
#include "aquarium.h"

int main() {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    // Create fish objects and add them to the aquarium
    Fish fish1("Koi", 10);
    Fish fish2("Chep", 15);
    Fish fish3("Tram", 18);
    Fish fish4("Ro", 25);

    Aquarium aquarium;
    aquarium.addFish(fish1);
    aquarium.addFish(fish2);
    aquarium.addFish(fish3);
    aquarium.addFish(fish4);

    // Simulate 5 rounds in the aquarium
    aquarium.simulate(5);
    // Print the current status of the fish in the aquarium
    aquarium.printStatus();

    return 0;
}
