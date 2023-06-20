#ifndef AQUARIUM_H
#define AQUARIUM_H

#include <vector>
#include "fish.h"

class Aquarium {
public:
    void addFish(const Fish& fish);
    void simulate(int num_rounds);
    void printStatus() const;

private:
    std::vector<Fish> fishes;
};

#endif /*AQUARIUM_H*/
