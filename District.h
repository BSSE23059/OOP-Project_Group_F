#ifndef OOP_PROJECT_GROUP_F_DISTRICT_H
#define OOP_PROJECT_GROUP_F_DISTRICT_H
#include <iostream>
#include <vector>
#include "Sector.h"
using namespace std;

class District {
private:
    string districtID;
    string districtName;
    vector<Sector> districtSectors;
    static int sectorCount;
public:
    District(const string& name, const string& id);
};


#endif //OOP_PROJECT_GROUP_F_DISTRICT_H
