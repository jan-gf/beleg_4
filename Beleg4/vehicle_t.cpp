/*
============================================================================
Name : vehicle_t.cpp
Author : A. Pretschner
Version :
Copyright :
Description : main() tests for dynamic casts
============================================================================
*/

#include "vehicle.h"
#include "citycar.h"
#include "menu.h"

bool inspect(Car*), // Inspection of different
inspect(Truck*); // vehicle types.

bool distribute(Vehicle* vehiclePtr); // distribute vehicle for inspection


int main() {
    CityCar carPark = CityCar();
    carPark.insert("Accord", false, 123, "Honda");
    carPark.insert("Golf", true, 456, "VW");

    while (true)
    {
        char input = menu();
        cout << "\n";
    	
        if (input == 'c')
            getCar();
        else if (input == 't')
            getTruck();
        else if (input == 's')
            cout << "Not implemented\n";
        else if (input == 'e')
            return 0;
    }	
}




bool distribute(Vehicle* vehiclePtr) {
    Car* carPtr = dynamic_cast<Car*>(vehiclePtr);
    if (carPtr != NULL)
        return inspect(carPtr);

    Truck* truckPtr = dynamic_cast<Truck*>(vehiclePtr);
    if (truckPtr != NULL)
        return inspect(truckPtr);

    return false;
}




bool inspect(Car* carPtr) {
    cout << "\nChecking car!" << endl;
    cout << "\nHere it comes:";
    carPtr->display();
    return true;
}



bool inspect(Truck* truckPtr) {
    cout << "\nChecking truck!" << endl;
    cout << "\nHere it comes:";
    truckPtr->display();
    return true;
}