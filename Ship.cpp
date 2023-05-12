#include "Ship.h"
#include <iostream>

Ship::Ship(std::string name, int yearBuilt)
    : name(name), yearBuilt(yearBuilt) {}

std::string Ship::getName() const {
    return name;
}

void Ship::setName(std::string name) {
    this->name = name;
}

int Ship::getYearBuilt() const {
    return yearBuilt;
}

void Ship::setYearBuilt(int yearBuilt) {
    this->yearBuilt = yearBuilt;
}

void Ship::print() const {
    std::cout << "Ship Name: " << name << std::endl;
    std::cout << "Year Built: " << yearBuilt << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Ship& ship) {
    os << "Ship Name: " << ship.name << std::endl;
    os << "Year Built: " << ship.yearBuilt << std::endl;
    return os;
}
