#include "CargoShip.h"
#include <iostream>

CargoShip::CargoShip(const std::string& shipName, const std::string& shipYearBuilt, int cargoCap)
    : Ship(shipName, shipYearBuilt), cargoCapacity(cargoCap) {}

int CargoShip::getCargoCapacity() const {
    return cargoCapacity;
}

void CargoShip::setCargoCapacity(int cargoCap) {
    cargoCapacity = cargoCap;
}

void CargoShip::print() const {
    std::cout << "Ship Name: " << getName() << std::endl;
    std::cout << "Cargo Capacity: " << cargoCapacity << " tons" << std::endl;
}
