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
    Vehicle(long n = 0L, const string& manuf = "");
    virtual ~Vehicle() {}

    // access methods:
    long getLicenseNumber(void) const { return licenseNumber; }
    void setLicenseNumber(long n) { licenseNumber = n; }

    const string& getManufacturer() const { return manufacturer; }
    void setManufacturer(const string& h) { manufacturer = h; }

    virtual void display() const; // show vehicle
};


class Car : public Vehicle {
private:
    string carType;
    bool hasSunroof;

public:
    Car(const string& type, bool sunroof,
        int n = 0, const string& h = "");

    // access methods:
    const string& getTyp(void) const { return carType; }
    void setTyp(const string s) { carType = s; }
    bool getSunRoof(void) const { return hasSunroof; }
    void setSunRoof(bool d) { hasSunroof = d; }
    void display(void) const;
};


class Truck : public Vehicle {
private:
    int axles;
    double load;

public:
    Truck(int a, double t, int n, const string& hs);
    void setAxles(int l) { axles = l; }
    int getAxles() const { return axles; }
    void setCapacity(double t) { load = t; }
    double getCapacity() const { return load; }

    void display() const;
};
#endif
