#include "Party.h"
Party::Party() {}

void Party::set_partyname(std::string n) {
    name=n;
}

void Party::set_leadername(std::string ln) {
    leadername = ln;
}

string Party::get_partyname() {return name;}
string Party::get_leadername() {return leadername;}

void Party::add_candiadates()
{
    string nm;string pid;int agee;bool gend;string con;
    cout<<"Enter candidate Name"<<endl;
    cin>>nm;
    p->setPersonName(nm);
    cout<<"Enter candidate Id"<<endl;
    cin>>pid;
    p->setId(pid);
    cout<<"Enter candidate age"<<endl;
    cin>>agee;
    p->setAge(agee);
    cout<<"Enter the gender Press 1 for Male || press 0 for Female"<<endl;
    cin>>gend;
    p->setGender(gend);
    cout<<"Enter the contact No "<<endl;
    cin>>con;
    p->setContact(con);
}
void Party::remove_candidates(string n)
{
    cout<<"Enter the canidate you want to remove"<<endl;
    

}
void Party::get_candaiates()
{

}

