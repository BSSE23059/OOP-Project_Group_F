#include "Party.h"

#include <utility>

void Party::set_partyName(std::string n) {
    name=std::move(n);
}

void Party::set_leaderName(std::string ln) {
    leaderName = std::move(ln);
}

string Party::get_partyName() {return name;}
string Party::get_leaderName() {return leaderName;}

void Party::add_candidates(const Candidate& candidate)
{
//    string nm;string pid;int agee;bool gend;string con;
//    cout<<"Enter candidate Name"<<endl;
//    cin>>nm;
//    p->setPersonName(nm);
//    cout<<"Enter candidate id"<<endl;
//    cin>>pid;
//    p->setId(pid);
//    cout<<"Enter candidate age"<<endl;
//    cin>>agee;
//    p->setAge(agee);
//    cout<<"Enter the gender Press 1 for Male || press 0 for Female"<<endl;
//    cin>>gend;
//    p->setGender(gend);
//    cout<<"Enter the contact No "<<endl;
//    cin>>con;
//    p->setContact(con);
}

void Party::remove_candidates(string n)
{
    cout<<"Enter the canidate you want to remove"<<endl;
    

}
void Party::get_candidates()
{

}

