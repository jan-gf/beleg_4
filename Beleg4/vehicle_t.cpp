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

int main() {
	auto carPark = new CityCar();
    carPark->insert("Accord", false, 123, "Honda");
    carPark->insert("Golf", true, 456, "VW");

    while (true)
    {
        char input = menu();
        cout << "\n";
    	
        if (input == 'c')
            carPark->insert(getCar());
        else if (input == 't')
            carPark->insert(getTruck());
        else if (input == 's')
            carPark->print();
        else if (input == 'e')
        {
            delete carPark;
            return 0;
        }
    }	
}