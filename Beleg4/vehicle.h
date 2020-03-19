/*
============================================================================
Name : vehicle.h
Author : A. Pretschner
Version :
Copyright :
Description : defines base class Vehicle and derivated classes Car and Truck
============================================================================
*/

#ifndef _VEHICLE_H_
#define _VEHICLE_H_

#include <iostream>
#include <string>

using namespace std;



class Vehicle {
private:
    long licenseNumber;
    string manufacturer;
public:
    Vehicle(long number = 0L, const string& manuf = "");
    virtual ~Vehicle() {}

    // access methods:
    long getLicenseNumber(void) const { return licenseNumber; }
    void setLicenseNumber(long number) { licenseNumber = number; }

    const string& getManufacturer() const { return manufacturer; }
    void setManufacturer(const string& manuf) { manufacturer = manuf; }

    virtual void display() const; // show vehicle
};


class Car : public Vehicle {
private:
    string carType;
    bool hasSunroof;

public:
    Car(const string& type, bool sunroof,
        int number = 0, const string& manuf = "");

    // access methods:
    const string& getTyp(void) const { return carType; }
    void setTyp(const string type) { carType = type; }
    bool getSunRoof(void) const { return hasSunroof; }
    void setSunRoof(bool sunroof) { hasSunroof = sunroof; }
    void display(void) const;
};


class Truck : public Vehicle {
private:
    int axles;
    double load;

public:
    Truck(int axles, double load, int number, const string& manuf);
    void setAxles(int a) { axles = a; }
    int getAxles() const { return axles; }
    void setCapacity(double capacity) { load = capacity; }
    double getCapacity() const { return load; }

    void display() const;
};
#endif
