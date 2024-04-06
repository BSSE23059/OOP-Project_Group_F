#include "SectorProvider.h"

SectorProvider *SectorProvider::instance = nullptr;

SectorProvider::SectorProvider() = default;

SectorProvider *SectorProvider::getInstance() {
    if(instance == nullptr){
        instance = new SectorProvider;
    }
    return instance;
}

void SectorProvider::addFederalSector(FederalSector &federalSector) {
    federalSectors.push_back(federalSector);
    SectorProvider::addFederalSectorToJson(federalSector);
    cout << federalSector.getCode() << " has been successfully added." << endl;

}

void SectorProvider::addFederalSectorToJson(FederalSector& federalSector){

    json putFederalSectors;
    putFederalSectors["Sector Code"] = federalSector.getCode();
    ofstream putSector("federalSectors.json");
    putSector << putFederalSectors << endl;
    putSector.close();

}