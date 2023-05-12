#pragma once

#include <string>
#include <iostream>

class Ship {
private:
    std::string name;
    std::string yearBuilt;

public:
    Ship(const std::string& shipName, const std::string& shipYearBuilt);
    virtual ~Ship();

    std::string getName() const;
    void setName(const std::string& shipName);

    std::string getYearBuilt() const;
    void setYearBuilt(const std::string& shipYearBuilt);

    virtual Ship& operator++();         // Prefix increment operator
    virtual Ship operator++(int);       // Postfix increment operator

    virtual void print() const;
};

