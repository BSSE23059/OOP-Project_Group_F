#ifndef OOP_PROJECT_GROUP_F_CANDIDATE_H
#define OOP_PROJECT_GROUP_F_CANDIDATE_H
#include <iostream>
#include "Voter.h"
#include <vector>
using namespace std;


class Candidate : public Voter{
private:
    string partyName;
    string sector;
public:
    const string &getPartyName() const;

};


#endif //OOP_PROJECT_GROUP_F_CANDIDATE_H
