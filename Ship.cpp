#include "Ship.h"
#include <iostream>

Ship::Ship(const std::string& shipName, const std::string& shipYearBuilt)
    : name(shipName), yearBuilt(shipYearBuilt) {}

std::string Ship::getName() const {
    return name;
}

void Ship::setName(const std::string& shipName) {
    name = shipName;
}

std::string Ship::getYearBuilt() const {
    return yearBuilt;
}

void Ship::setYearBuilt(const std::string& shipYearBuilt) {
    yearBuilt = shipYearBuilt;
}

void Ship::print() const {
    std::cout << "Ship Name: " << name << std::endl;
    std::cout << "Year Built: " << yearBuilt << std::endl;
}

Ship::~Ship() {
    
}

Ship& Ship::operator++() {
    // Increment capacity logic for Ship (if applicable)
    return *this;
}

Ship Ship::operator++(int) {
    // Increment capacity logic for Ship (if applicable)
    return *this;
}
