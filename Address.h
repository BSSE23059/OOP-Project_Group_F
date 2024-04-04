#ifndef OOP_PROJECT_GROUP_F_ADDRESS_H
#define OOP_PROJECT_GROUP_F_ADDRESS_H
#include <iostream>
using namespace std;

class Address {
// Address can exist only in one block of one Town of one sector of one city and of one province
private:
    string province;
    string district;
    string unionCouncil;
    string block;
    int houseNum;
    int streetNum;
public:
    Address();
    Address(string province,string district,string uncouncil,string block,int housenm,int streetnm);
    void setprovice(string prvn);
    void set_disrict(string dist);
    void set_Unioncouncil(string uncoun);
    void set_block(string blck);
    void  set_HouseNum(int hnum);
    void  set_StreetNum(int stnum);
    string get_provice();
    string get_disrict();
    string get_Unioncouncil();
    string get_block();
    int get_HouseNum();
    int get_StreetNum();
};


#endif //OOP_PROJECT_GROUP_F_ADDRESS_H
