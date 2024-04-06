
#ifndef OOP_PROJECT_GROUP_F_PARTY_H
#define OOP_PROJECT_GROUP_F_PARTY_H
#include <vector>
#include"Sector.h"
#include "PartySymbol.h"
#include "Address.h"
#include "Candidate.h"


class Party {
private:
    Person *p;
    string name;
    string leaderName;
    PartySymbol partySymbol;
    vector<Candidate> candidate_participating;
    // vector<seats>seatsWon    (add when made seats.h and cpp)
    Address address_of_headQuarters;
public:
   Party(string nm,string leadernm,PartySymbol partysym,Address address_of_hoq);
   void set_partyName(string n);
   void set_leaderName(string ln);
   string get_partyName();
   string get_leaderName();
   void add_candidates(const Candidate& candidate);
   void remove_candidates(string n);
   void get_candidates();
   void set_partsymbol();
 //  void get_seatsWon(vector<Seats>)   ( add when implement seats.h and seats.cpp)

};


#endif //OOP_PROJECT_GROUP_F_PARTY_H
