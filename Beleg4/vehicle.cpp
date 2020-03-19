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
Vehicle::Vehicle(long n, const string& manuf)
    : licenseNumber(n), manufacturer(manuf) {}

void Vehicle::display() const {
    cout << "\n---------------------------- "
        << "\nVehicle-Number: " << licenseNumber
        << "\nManufacturer: " << manufacturer
        << endl;
}

// Methods of derived Car class:
// -------------------------------------------------------
Car::Car(const string& tp, bool sd, int n, const string& hs)
    : Vehicle(n, hs), carType(tp), hasSunroof(sd) {}

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
Truck::Truck(int a, double t, int n, const string& hs)
    : Vehicle(n, hs), axles(a), load(t) {}

void Truck::display() const {
    Vehicle::display();
    cout << "Axles: " << axles
        << "\nCapacity: " << load << " tons"
        << endl;
}