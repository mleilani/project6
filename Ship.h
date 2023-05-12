#pragma once
#include <string>

class Ship {
protected:
    std::string name;
    int yearBuilt;

public:
    Ship(std::string name, int yearBuilt);

    // Getter and setter methods

    std::string getName() const;
    void setName(std::string name);

    int getYearBuilt() const;
    void setYearBuilt(int yearBuilt);

    // Virtual function to be overridden in derived classes

    virtual void print() const;

    // Overloading the << operator as a friend function

    friend std::ostream& operator<<(std::ostream& os, const Ship& ship);
};

