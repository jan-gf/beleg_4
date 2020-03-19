#include <iostream>
#include <string>
#include <vector>
#include "vehicle.h"

using namespace std;

class CityCar
{
private:
	vector<Vehicle*> carPark;
	int count;
public:
	CityCar();
	~CityCar();

	// Insert new car
	bool insert(const string& type, bool sunroof, long number, const string& manuf);
	// Insert new truck
	bool insert(int axles, double capacity, long number, const string& manuf);
};