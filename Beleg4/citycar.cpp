#include "citycar.h"

#define MAX_COUNT 50

CityCar::CityCar() : carPark(vector<Vehicle*>(MAX_COUNT)), count(0) {}

bool CityCar::insert(const string& type, bool sunroof, long number, const string& manuf)
{
	if (count == MAX_COUNT)
		return false;
	
	Vehicle* vehicle = new Car(type, sunroof, number, manuf);
	carPark[count] = vehicle;
	count++;

	return true;
}

bool CityCar::insert(int axles, double capacity, long number, const string& manuf)
{
	if (count == MAX_COUNT)
		return false;

	Vehicle* vehicle = new Truck(axles, capacity, number, manuf);
	carPark[count] = vehicle;
	count++;

	return true;
}

CityCar::~CityCar()
{
	for (int i = 0; i < count; i++)
	{
		delete carPark[i];
		carPark[i] = nullptr;
	}
}
