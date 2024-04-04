#ifndef OOP_PROJECT_GROUP_F_PARTYSYMBOL_H
#define OOP_PROJECT_GROUP_F_PARTYSYMBOL_H

#include<iostream>

using namespace std;

class PartySymbol {
private:
    string partysymbol;
public:
    PartySymbol();

    void set_partysymbol(string pn);

    string get_partysymbol();
};


#endif //OOP_PROJECT_GROUP_F_PARTYSYMBOL_H
