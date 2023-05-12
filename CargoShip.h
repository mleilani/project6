#pragma once

#include <string>
#include <iostream>
#include "Ship.h"

class CargoShip : public Ship {
private:
    int cargoCapacity;

public:
    CargoShip(const std::string& shipName, const std::string& shipYearBuilt, int cargoCap);

    int getCargoCapacity() const;
    void setCargoCapacity(int cargoCap);

    void print() const;
};

