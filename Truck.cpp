//
// Created by PC on 4/12/2019.
//

#include "Truck.h"


Truck::Truck(){

    Vehicle("none", "Ford", 4);

    load = 0;
    towing = 0;
}

Truck::Truck(string ownerName, string manufact, int numCyl, double load, double towing) {

    Vehicle(ownerName, manufact, numCyl);

    this->load = load;
    this->towing = towing;
}

double Truck::getLoad() const {
    return load;
}

void Truck::setLoad(double load) {
    Truck::load = load;
}

double Truck::getTowing() const {
    return towing;
}

void Truck::setTowing(double towing) {
    Truck::towing = towing;
}





/*
Then create a class called Truck that is derived from Vehicle and has additional properties:

-the load capacity in tons (type double since it may contain a fractional part) and
-towing capacity in pounds (type int).

and methods:

-getters and setters for all properties (getLoad, getTowing, setLoad, setTowing)
-overloaded << operator
-default constructor initializing properties to 0
-parameterized constructor receiving 5 values.


The signature for the headers for the default and parameterized constructors need to following the below pattern:

Truck::Truck(): Vehicle("none","Ford",4)

Truck::Truck(string owner, string manufact, int numCyl, double load, double towing):Vehicle(owner,manufact,numCyl)
 */