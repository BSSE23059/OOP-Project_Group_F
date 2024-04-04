#ifndef OOP_PROJECT_GROUP_F_PERSON_H
#define OOP_PROJECT_GROUP_F_PERSON_H
#include <iostream>
#include "Candidate.h"
using namespace std;

class Person {
private:
    string ID;
    string personName;
    int age;
    bool gender;
    string contact;

public:
    Person();
    void setId(const string &id);
    void setPersonName(const string &perName);
    void setAge(int age);
    void setGender(bool perGender);
    void setContact(const string &perContact);
    const string &getContact() const;
    bool isGender() const;
    int getAge() const;
    const string &getPersonName() const;
    const string &getId() const;
    virtual void castVote(const Candidate& candidate) = 0;


};


#endif //OOP_PROJECT_GROUP_F_PERSON_H
