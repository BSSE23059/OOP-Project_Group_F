#ifndef PROJECT_OOP_VOTER_H
#define PROJECT_OOP_VOTER_H
#include <iostream>
#include "Person.h"
#include "Candidate.h"

class Voter : public Person {
private:
    string voterID;
    string CNIC;

public:
    bool eligibleToVote;
    Voter(const string& voterName, int voterAge, string voterGender, const string& id, const string& cnic);
    void voteForCandidate(Candidate* candidate);
    const string& getVoterID() const;
    void setVoterID(const string& id);
    const string& getCNIC() const;
    void setCNIC(const string& cnic);
    bool hasVoted();
    bool isEligibleToVote() const { return age >= 18; }
    ~Voter();
    void setVoted(bool b);
};

#endif