#include "citycar.h"

#define MAX_COUNT 50

CityCar::CityCar() : carPark(vector<Vehicle*>(MAX_COUNT)), count(0) {}

bool CityCar::insert(const string& type, bool sunroof, long number, const string& manuf)
{
	return insert(new Car(type, sunroof, number, manuf));
}

bool CityCar::insert(int axles, double capacity, long number, const string& manuf)
{
	return insert(new Truck(axles, capacity, number, manuf));
}

bool CityCar::insert(Vehicle* vehicle)
{
	if (count == MAX_COUNT)
		return false;
	
	carPark[count] = vehicle;
	count++;

	return true;
}

void CityCar::print()
{
	for (int i = 0; i < count; i++)
		carPark[i]->display();
}

CityCar::~CityCar()
{
	for (int i = 0; i < count; i++)
	{
		delete carPark[i];
		carPark[i] = nullptr;
		count--;
	}
}
