//
// Created by PC on 4/12/2019.
//

#ifndef CH_10_VEHICLES_DRIVER_H
#define CH_10_VEHICLES_DRIVER_H


#include <string>
#include <ostream>

using namespace std;

class Person {

private:
    string name;
public:
    const string &getName() const;

    void setName(const string &name);

    Person();

    Person(const string &name);

    friend ostream &operator<<(ostream &os, const Person &driver);


};


#endif //CH_10_VEHICLES_DRIVER_H


/*
 The definition of the class Person is below. The implementation of the class is part of this programming project.

class Person {
     public:
        Person();
        Person(string the_name);
        string getName() const;
        void setName(string name);
        friend ostream& operator <<(ostream& out_stream, const Person& person_object);
    private:
       string name;
};

 */