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
    string district;
    vector <UnionCouncil> unionCouncils;
    vector<Candidate> candidates;
public:
    Sector();
    vector<Candidate>& getCandidates();
    const string &getDistrict() const;
    void setDistrict(const string &sectorDistrict);
    virtual void nominateCandidate(const Candidate& candidate) = 0;
};


#endif //OOP_PROJECT_GROUP_F_1_SECTOR_H
