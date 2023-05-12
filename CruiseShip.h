#pragma once

#include "Ship.h"

class CruiseShip : public Ship {
private:
    int maxPassengers;

public:
    CruiseShip(const std::string& shipName, const std::string& shipYearBuilt, int maxPass);

    int getMaxPassengers() const;
    void setMaxPassengers(int maxPass);

    void incrementCapacity();

    void print() const;
};
