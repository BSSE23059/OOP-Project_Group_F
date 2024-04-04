#include "Person.h"

Person::Person() = default;

void Person::setId(const string &id) {
    ID = id;
}

void Person::setPersonName(const string &perName) {
    this -> personName = perName;
}

void Person::setAge(int perAge) {
    this -> age = perAge;
}

void Person::setGender(bool perGender) {
    this -> gender = perGender;
}

void Person::setContact(const string &perContact) {
    this -> contact = perContact;
}

const string &Person::getId() const {
    return ID;
}

const string &Person::getPersonName() const {
    return personName;
}

int Person::getAge() const {
    return age;
}

bool Person::isGender() const {
    return gender;
}

const string &Person::getContact() const {
    return contact;
}

