#ifndef FISH_H
#define FISH_H

#include <string>

class Fish {
public:
    Fish(const std::string& name, int health);

    const std::string& getName() const;
    int getHealth() const;
    void bite(Fish& other_fish);
    void weaken();
    bool isAlive();
    void fishStatus() const;

private:
    std::string name;
    int health;
};

#endif /*FISH_H*/
