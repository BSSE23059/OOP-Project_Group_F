#include "Person.h"

Person::Person(const string& personName, int personAge, string personGender) : name(personName), age(personAge), gender(personGender) {}

void Person::setName(const string& personName) {
    name = personName;
}

string Person::getName() const {
    return name;
}

int Person::getAge() {
    return age;
}

string Person::getGender() {
    return gender;
}
