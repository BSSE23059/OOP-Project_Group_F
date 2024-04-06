#include "SectorProvider.h"

SectorProvider *SectorProvider::instance = nullptr;

SectorProvider::SectorProvider() {}

SectorProvider *SectorProvider::getInstance() {
    if(instance == nullptr){
        instance = new SectorProvider;
    }
    return instance;
}

void SectorProvider::addFederalSector(FederalSector &federalSector) {

    for(int i=0;i<federalSectors.size();i++){
        if(federalSectors[i].getCode() != federalSector.getCode()){
            federalSectors.push_back(federalSector);
            SectorProvider::addFederalSectorToJson(federalSector);
            cout << federalSector.getCode() << " has been successfully added." << endl;
        } else {
            cout << federalSector.getCode() << " already exists." << endl;
        }
    }
}

void SectorProvider::addFederalSectorToJson(FederalSector& federalSector){
    ofstream putSector("Sectors/federalSectors.json");
    json putFederalSectors;
    putFederalSectors["Sector Code"] = federalSector.getCode();
    putSector << putFederalSectors << endl;
    putSector.close();

}