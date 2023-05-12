#include <iostream>
#include <string>
#include "Ship.h"
#include "CruiseShip.h"

int main() {
    std::string name, yearBuilt;
    int maxPassengers;

    // Prompt for CruiseShip details
    std::cout << "Enter CruiseShip details:" << std::endl;
    std::cout << "Name: ";
    std::getline(std::cin >> std::ws, name);
    std::cout << "Year Built: ";
    std::getline(std::cin >> std::ws, yearBuilt);
    std::cout << "Max Passengers: ";
    std::cin >> maxPassengers;

    // Create CruiseShip object
    CruiseShip cruiseShip(name, yearBuilt, maxPassengers);

    // Print CruiseShip details
    std::cout << std::endl;
    cruiseShip.print();

    return 0;
}
