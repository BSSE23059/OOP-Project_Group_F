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
};


#endif //OOP_PROJECT_GROUP_F_ADDRESS_H
