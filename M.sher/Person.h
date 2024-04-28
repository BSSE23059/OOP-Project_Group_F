#ifndef PROJECT_OOP_PERSON_H
#define PROJECT_OOP_PERSON_H

#include <string>
using namespace std;

class Person {
private:
    string gender;
protected:
    int age;
public:
    Person(const string& personName, int personAge, string personGender);
    // Getter and setter methods for attributes
    void setName(const string& personName);
    string getName() const;
    // Define getters and setters for other attributes
    int getAge();
    string getGender();
    bool operator==(const Person& other) const {
        return name == other.name && age == other.age && gender == other.gender;
    }
    string name;
};


#endif // PERSON_H
