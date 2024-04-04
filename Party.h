//
// Created by Home on 4/4/2024.
//

#ifndef OOP_PROJECT_GROUP_F_PARTY_H
#define OOP_PROJECT_GROUP_F_PARTY_H
#include <vector>
#include "PartySymbol.h"
#include "Address.h"
#include "Candidate.h"
class Party {
private:
    string name;
    string leadername;
    PartySymbol partySymbol;
    vector<Candidate> candidate_participating;
    // vector<seats>seatswon    (add when made seats.h and cpp)
    Address address_of_headofquaters;
public:
   Party();
   Party(string nm,string leadernm,PartySymbol partysym,Address address_of_hoq);
   void set_partyname(string n);
   void set_leadername(string ln);
   string get_partyname();
   string get_leadername();
   void add_candiadates();
   void remove_candidates();
   void get_candaiates();
    void set_partsymbol();
 //  void get_seatswon(vector<Seats>)   ( add when implement seats.h and seats.cpp)

};


#endif //OOP_PROJECT_GROUP_F_PARTY_H
