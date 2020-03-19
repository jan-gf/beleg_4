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

bool inspect(Car*), // Inspection of different
inspect(Truck*); // vehicle types.

bool distribute(Vehicle* vehiclePtr); // distribute vehicle for inspection


int main() {
    Vehicle* vehiclePtr = new Car("520i", true, 3265, "BMW");

    Car* carPtr = dynamic_cast<Car*>(vehiclePtr);
    if (carPtr != NULL) { // ok?
        cout << "\nAfter pointer Down-Cast: " << endl;
        carPtr->display();
    }

    Car cabrio("190 SL", true, 9154, "Mercedes Benz");
    Vehicle& r_vehicle = cabrio;

    Car& r_car = dynamic_cast<Car&>(r_vehicle);
    // ok? throws exception if not ok.

    cout << "\nAfter reference Down-Cast: " << endl;
    r_vehicle.display();
    cin.get();

    Truck* truckPtr = new Truck(8, 7.5, 5437, "Volvo");
    distribute(vehiclePtr);
    distribute(truckPtr);

    return 0;
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