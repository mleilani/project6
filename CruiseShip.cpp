#include "CruiseShip.h"
#include <iostream>

CruiseShip::CruiseShip(const std::string& shipName, const std::string& shipYearBuilt, int maxPass)
    : Ship(shipName, shipYearBuilt), maxPassengers(maxPass) {}

int CruiseShip::getMaxPassengers() const {
    return maxPassengers;
}

void CruiseShip::setMaxPassengers(int maxPass) {
    maxPassengers = maxPass;
}

void CruiseShip::incrementCapacity() {
    ++maxPassengers;
}

void CruiseShip::print() const {
    Ship::print();
    std::cout << "Max Passengers: " << maxPassengers << std::endl;
}
