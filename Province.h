#ifndef OOP_PROJECT_GROUP_F_PROVINCE_H
#define OOP_PROJECT_GROUP_F_PROVINCE_H
#include <iostream>
#include <vector>
#include "District.h"
#include "unordered_map"
#include "Party.h"
using namespace std;

class Province {
private:
    string ID;
    string name;
    vector<District> districts;
    static int numOfDistricts;
public:
    Province(const string &proName, const string& proID);
    void addDistrict(const District& district);
    void showResult();
};


#endif //OOP_PROJECT_GROUP_F_PROVINCE_H
