/*
============================================================================
Name : vehicle.cpp
Author : A. Pretschner
Version :
Copyright :
Description : main() function for Vehicle application
============================================================================
*/


#include "vehicle.h" 



// Methods of the Vehicle base class 
// ------------------------------------------------------
Vehicle::Vehicle(long number, const string& manuf)
    : licenseNumber(number), manufacturer(manuf) {}

void Vehicle::display() const {
    cout << "\n---------------------------- "
        << "\nVehicle-Number: " << licenseNumber
        << "\nManufacturer: " << manufacturer
        << endl;
}

// Methods of derived Car class:
// -------------------------------------------------------
Car::Car(const string& type, bool sunroof, int number, const string& manuf)
    : Vehicle(number, manuf), carType(type), hasSunroof(sunroof) {}

void Car::display(void) const {
    Vehicle::display(); // base class method

    cout << "Type: " << carType
        << "\nSun Roof: ";
    if (hasSunroof)
        cout << "yes " << endl;
    else
        cout << "no " << endl;
}

// Methods of derived Truck class:
// ----------------------------------------------------
Truck::Truck(int axles, double load, int number, const string& manuf)
    : Vehicle(number, manuf), axles(axles), load(load) {}

void Truck::display() const {
    Vehicle::display();
    cout << "Axles: " << axles
        << "\nCapacity: " << load << " tons"
        << endl;
}