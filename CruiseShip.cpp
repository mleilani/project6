#include "CruiseShip.h"
#include <iostream>

CruiseShip::CruiseShip(std::string name, int yearBuilt, int passengerCapacity)
    : Ship(name, yearBuilt), passengerCapacity(passengerCapacity) {}

int CruiseShip::getPassengerCapacity() const {
    return passengerCapacity;
}

void CruiseShip::setPassengerCapacity(int passengerCapacity) {
    this->passengerCapacity = passengerCapacity;
}

CruiseShip CruiseShip::operator+(int n) const {
    CruiseShip newShip(*this);
    newShip.passengerCapacity += n;
    return newShip;
}

CruiseShip operator+(int n, const CruiseShip& cruiseShip) {
    return cruiseShip + n;
}

//CruiseShip& CruiseShip::operator++()
