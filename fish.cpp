#include "fish.h"
#include <iostream>

Fish::Fish(const std::string& name, int health) : name(name), health(health) {}

const std::string& Fish::getName() const {
    return name;
}

int Fish::getHealth() const {
    return health;
}

void Fish::bite(Fish& other_fish) {
    if (health > other_fish.health) {
        health += other_fish.health;
        other_fish.health = 0;
        std::cout << " ->" << this->name << " eaten " << other_fish.getName() << std::endl;
    }

    if (health < other_fish.health) {
        other_fish.health += health;
        health = 0;
        std::cout << " ->" << other_fish.getName()<< " eaten " << this->name << std::endl;
    }
}

void Fish::weaken() {
    // Calculate weakening factor based on current health
    int weakeningFactor = health / 5;
    // Decrease the health of the fish
    health -= weakeningFactor;
    // Ensure health does not go below zero
    if (health < 0) {
        health = 0;
    }
}

bool Fish::isAlive() {
    return health > 0;
}

void Fish::fishStatus() const {
    std::cout << " Fish: " << this->name << ", Health: " << this->health << std::endl;
}
