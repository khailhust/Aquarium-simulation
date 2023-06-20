#include "aquarium.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

void Aquarium::addFish(const Fish& fish) {
    fishes.push_back(fish);
}

void Aquarium::simulate(int num_rounds) {
    for (int round = 0; round < num_rounds; ++round) {
        std::cout << "Round: " << (round + 1) << std::endl;
        for (Fish& fish : fishes) {
            fish.weaken();
            fish.fishStatus();
        }

        for (Fish& fish : fishes) {
            // Select a random fish in the aquarium to bite
            int randomIndex = rand() % fishes.size();
            Fish& otherFish = fishes[randomIndex];

            // Check if the biting fish and the bitten fish are both alive
            if (&fish != &otherFish && fish.isAlive() && otherFish.isAlive()) {
                fish.bite(otherFish);
            }
        }
    }
}

void Aquarium::printStatus() const {
    for (const Fish& fish : fishes) {
        std::cout << "Fish: " << fish.getName() << ", Health: " << fish.getHealth() << std::endl;
    }
}
