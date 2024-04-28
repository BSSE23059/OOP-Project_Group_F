#ifndef PROJECT_OOP_PARTY_H
#define PROJECT_OOP_PARTY_H


using namespace std;
using namespace std;

#include "string"
#include <vector>
#include <algorithm>

class Candidate;
class Person;

class Party {
private:
    string name;
    vector<Person> members;
    vector<Candidate*> candidates;

public:
    Party(const string& partyName);
    void addMember(Person memberName);
    void removeMember(const string& memberName);
    void storeMemberDetails(const string& memberName, int age, string gender);
    void manageCandidates();
};


#endif // PARTY_H
