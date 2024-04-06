#ifndef OOP_PROJECT_GROUP_F_SECTORPROVIDER_H
#define OOP_PROJECT_GROUP_F_SECTORPROVIDER_H
#include <iostream>
#include <vector>
#include "FederalSector.h"
using namespace std;

// SectorProvider is a Singleton class to maintain the record of sectors in one class and to
// maintain a global point of acc
class SectorProvider {
private:
    static SectorProvider* instance;
    unordered_map<int,string> sectors;
    SectorProvider();
public:
    static SectorProvider* getInstance();
    void addFederalSector(FederalSector& federalSector);
};


#endif //OOP_PROJECT_GROUP_F_SECTORPROVIDER_H
