
#include <iostream>
#include "vehicle.h"

using namespace std;

char menu()
{
	cout << "\n\n****Car-Park-Management-System*********\nC = add new car\nT = add new truck\nS = show car park\nE = exit program\n\nYour choice:";

	string input;
	getline(cin, input);
	return input[0];
}

Car* getCar()
{
	cout << "***ADDING NEW CAR***\n\nCar Type: ";
	string type;
	getline(cin, type);

	bool sunroof;
	while(true)
	{
		cout << "Sun roof? [y/n]: ";
		string input;
		getline(cin, input);
		if (input[0] == 'y')
		{
			sunroof = true;
			break;
		}
		else if (input[0] == 'n')
		{
			sunroof = false;
			break;
		}
		cout << "\nInvalid input.\n";
	}

	long number;
	while (true)
	{
		cout << "Number: ";
		string input;
		getline(cin, input);
		try
		{
			number = stol(input);
			break;
		}
		catch (invalid_argument&) {
			cout << "Invalid input.\n";
		}
	}

	string manuf;
	cout << "Manufacturer:";
	getline(cin, manuf);

	return new Car(type, sunroof, number, manuf);;
}

Truck* getTruck()
{
	cout << "***ADDING NEW Truck***\n\n";
	int axles;
	while (true)
	{
		cout << "Axles: ";
		string input;
		getline(cin, input);
		try
		{
			axles = stoi(input);
			break;
		}
		catch (invalid_argument&) {
			cout << "Invalid input.\n";
		}
	}

	double load;
	while (true)
	{
		cout << "Load: ";
		string input;
		getline(cin, input);
		try
		{
			load = stoi(input);
			break;
		}
		catch (invalid_argument&) {
			cout << "Invalid input.\n";
		}
	}

	long number;
	while (true)
	{
		cout << "Number: ";
		string input;
		getline(cin, input);
		try
		{
			number = stol(input);
			break;
		}
		catch (invalid_argument&) {
			cout << "Invalid input.\n";
		}
	}

	string manuf;
	cout << "Manufacturer:";
	getline(cin, manuf);

	return new Truck(axles, load, number, manuf);;
}