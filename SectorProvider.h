#ifndef OOP_PROJECT_GROUP_F_SECTORPROVIDER_H
#define OOP_PROJECT_GROUP_F_SECTORPROVIDER_H
#include <iostream>
#include <vector>
#include "FederalSector.h"
using namespace std;

class SectorProvider {
private:
    static SectorProvider* instance;
    vector <FederalSector> federalSectors;
    SectorProvider();
public:
    static SectorProvider* getInstance();
    void addFederalSector(FederalSector& federalSector);
};


#endif //OOP_PROJECT_GROUP_F_SECTORPROVIDER_H
