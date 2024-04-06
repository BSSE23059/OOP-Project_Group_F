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
            cout << federalSector.getCode() << " has been successfully added." << endl;
        } else {
            cout << federalSector.getCode() << " already exists." << endl;
        }
    }
}
