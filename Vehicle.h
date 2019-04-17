//
// Created by PC on 4/12/2019.
//

#ifndef CH_10_VEHICLES_VEHICLE_H
#define CH_10_VEHICLES_VEHICLE_H


#include "Person.h"
#include <string>
#include <ostream>

using namespace std;

class Vehicle {
private:
    string manufacturer;
    int numCylinders;
    Person owner;
    string personToBe;

public:
    const string &getManufacturer() const;

    void setManufacturer(const string &manufacturer);

    int getCylinders() const;

    void setCylinders(int numCylinders);

    const Person &getOwner() const;

    void setOwner(const Person &owner);

    friend ostream &operator<<(ostream &os, const Vehicle &vehicle);

    Vehicle(string personToBeP, string manufacturerP, int numCylindersP);

    Vehicle();
};

#endif //CH_10_VEHICLES_VEHICLE_H

/*
 *
 Create a base class called Vehicle that has as properties:

-the manufacturer’s name (type string),
-number of cylinders in the engine (type int), and
-owner (type Person, given below).

and methods:

-getters and setters for all properties (getManufacturer, getOwner, getCylinders, setManufacturer, setOwner, getCylinders)
-overloaded << operator
-default constructor - initialize the manufacture's name to "none", number of cylinders to 4, and the owner to a default Person
-parameterized constructor - passing a string owner name, string manufacturer name, and int cylinders.
    Use a constructor initialization list to initialize person object with the passed name like so:

 Vehicle::Vehicle(string the_name,string man_name, int num_cyl):owner(the_name)

 */
