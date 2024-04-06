#ifndef OOP_PROJECT_GROUP_F_VOTER_H
#define OOP_PROJECT_GROUP_F_VOTER_H
#include <iostream>
#include "Person.h"
#include <ctime>
using namespace std;

class Voter : public Person{
private:

    string pollingStationID;
    bool isRegistered;
    bool castStatus;
    time_t timeOfVote;

public:
    Voter(const string& voterName, const string& voterId, int voterAge, bool voterGender, const string& contact);
    void setPollingStationId(const string &pollingStationId);
    void setIsRegistered(bool voterIsRegistered);
    void setCastStatus(bool voterCastStatus);
    void setTimeOfVote(time_t currentTime);
//    void castVote(const Candidate& candidate) override;


};


#endif //OOP_PROJECT_GROUP_F_VOTER_H
