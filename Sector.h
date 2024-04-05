
#ifndef OOP_PROJECT_GROUP_F_1_SECTOR_H
#define OOP_PROJECT_GROUP_F_1_SECTOR_H
#include<iostream>
#include"Pollingstation.h"
#include "UnionCouncil.h"
#include<vector>
#include "Candidate.h"
using namespace std;


class Sector {
private:
    bool candidateAdded;
    vector <UnionCouncil> unionCouncils;
    vector<Candidate> candidates;
protected:
    string code;
    static int sectorCode;
public:
    Sector();
    string getCode();
    void setCode(string strCode);
    void setSectorCode(int secCode);
    vector<Candidate>& getCandidates();
    void setCandidateAdded(bool canAdded);
    virtual void nominateCandidate(const Candidate& candidate) = 0;

};


#endif //OOP_PROJECT_GROUP_F_1_SECTOR_H
