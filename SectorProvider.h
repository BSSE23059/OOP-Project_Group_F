#ifndef OOP_PROJECT_GROUP_F_SECTORPROVIDER_H
#define OOP_PROJECT_GROUP_F_SECTORPROVIDER_H
#include <iostream>
#include <vector>
#include "nlohmann/json.hpp"
#include "FederalSector.h"
#include "Sectors/federalSectors.json"
#include <fstream>
using json = nlohmann::json;
using namespace std;

// SectorProvider is a Singleton class to maintain the record of sectors in one class and to
// maintain a global point of access
class SectorProvider {
private:
    static SectorProvider* instance;
    vector<FederalSector> federalSectors;
    SectorProvider();
public:
    static SectorProvider* getInstance();
    void addFederalSector(FederalSector& federalSector);
    static void addFederalSectorToJson(FederalSector& federalSector);
};


#endif //OOP_PROJECT_GROUP_F_SECTORPROVIDER_H
