//
// Created by PC on 4/12/2019.
//

#ifndef CH_10_VEHICLES_TRUCK_H
#define CH_10_VEHICLES_TRUCK_H

#include "Vehicle.h"

class Truck: public Vehicle {
public:

    Truck();

    Truck(string ownerName, string manufact, int numCyl, double load, double towing);

    double getLoad() const;

    void setLoad(double load);

    double getTowing() const;

    void setTowing(double towing);

private:

  double load;
  double towing;


};


#endif //CH_10_VEHICLES_TRUCK_H


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