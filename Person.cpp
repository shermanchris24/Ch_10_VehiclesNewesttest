//
// Created by PC on 4/12/2019.
//

#include "Person.h"

const string &Person::getName() const {
    return name;
}

void Person::setName(const string &name) {
    Person::name = name;
}

Person::Person() {
    name="none";
}

Person::Person(const string &name) : name(name) {}

ostream &operator<<(ostream &os, const Person &driver) {
    os << "My name is: " << driver.name;
    return os;
}