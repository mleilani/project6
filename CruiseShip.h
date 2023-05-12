#pragma once

#include "Ship.h"

class CruiseShip : public Ship {
private:
    int passengerCapacity;

public:
    CruiseShip(std::string name, int yearBuilt, int passengerCapacity);

    // Getter and setter methods

    int getPassengerCapacity() const;
    void setPassengerCapacity(int passengerCapacity);

    // Overloading the + operator

    CruiseShip operator+(int n) const;
    friend CruiseShip operator+(int n, const CruiseShip& cruiseShip);

    // Overloading the ++ operator (prefix and postfix)

    CruiseShip& operator++(); // Prefix increment
    CruiseShip operator++(int); // Postfix increment

    // Overriding the print function

    void print() const override;

    // Overloading the >> operator as a friend function

    friend std::istream& operator>>(std::istream& is, CruiseShip& cruiseShip);
};

