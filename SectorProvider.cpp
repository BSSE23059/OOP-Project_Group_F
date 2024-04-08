#include "SectorProvider.h"
using json = nlohmann::json;

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
    if(putSector.fail()){
        cerr << "File fail to open" << endl;
    }
    putSector << putFederalSectors << endl;
    putSector.close();


}