#include "Person.h"

Person::Person() = default;

void Person::setId(const string &id) {
    ID = id;
}

void Person::setPersonName(const string &perName) {
     personName = perName;
}

void Person::setAge(int perAge) {
     age = perAge;
}

void Person::setGender(bool perGender) {
     gender = perGender;
}

void Person::setContact(const string &perContact) {
     contact = perContact;
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

