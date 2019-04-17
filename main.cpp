#include "Person.h"
#include "Vehicle.h"
#include <iostream>
#include <string>
#include "Truck.h"
using namespace std;

int main(){

    Person one("Will");
    Person two("Kim");

    Vehicle car("PoopyPerson","Toyota",4);



    cout<<car<<endl;

    car.setManufacturer("Nissan");
    car.setOwner(two);

    cout<<car<<endl;

    //Truck mynewTruck;
    //Truck myTruck("Steve","FIAT",4,10,5);


    return 0;
}

/*
 In main(), based on user input for the needed values, create an instance of a Car and a Truck object and test all your member functions as shown:

-Using the parameterized constructor, Create a Vehicle object
-Output the object using the overloaded << operator
-Change each attribute of the object using appropriate setters
-Output the object again to show the changes

-Repeat the same process with a Truck object.

 */