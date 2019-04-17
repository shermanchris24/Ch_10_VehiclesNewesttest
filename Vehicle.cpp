//
// Created by PC on 4/12/2019.
//

#include "Vehicle.h"



const string &Vehicle::getManufacturer() const {
    return manufacturer;
}

void Vehicle::setManufacturer(const string &manufacturer) {
    Vehicle::manufacturer = manufacturer;
}

int Vehicle::getCylinders() const {
    return numCylinders;
}

void Vehicle::setCylinders(int numCylinders) {
    Vehicle::numCylinders = numCylinders;
}

const Person &Vehicle::getOwner() const {
    return owner;
}

void Vehicle::setOwner(const Person &owner) {
    Vehicle::owner = owner;
}

ostream &operator<<(ostream &os, const Vehicle &vehicle) {
    os << "manufacturer: " << vehicle.manufacturer << " numCylinders: " << vehicle.numCylinders << " owner: "
       << vehicle.getOwner().getName();
    return os;
}

Vehicle::Vehicle(string personToBeP, string manufacturerP, int numCylindersP) : owner(personToBeP) {

    manufacturer = manufacturerP;
    numCylinders = numCylindersP;
}

Vehicle::Vehicle() {
    manufacturer = "none";
    numCylinders = 4;
    owner = Person();
}


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