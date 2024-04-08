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

    Address(string province,string district,string perUnionCouncil,string block,int houseNum,int streetNum);
    void setProvice(string perProvince);
    void setDisrict(string dist);
    void setUnionCouncil(string unionCoun);
    void setBlock(string blck);
    void  setHouseNum(int hnum);
    void  set_StreetNum(int stnum);
    string get_provice();
    string get_disrict();
    string get_Unioncouncil();
    string get_block();
    int get_HouseNum();
    int get_StreetNum();
};


#endif //OOP_PROJECT_GROUP_F_ADDRESS_H
