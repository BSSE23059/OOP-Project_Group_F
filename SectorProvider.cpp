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

//    json putFederalSectors;
//    putFederalSectors["Sector Code"] = federalSector.getCode();
//    ofstream putSector("federalSectors.json");
//    if(putSector.fail()){
//        cerr << "File fail to open" << endl;
//    }
//    putSector << putFederalSectors << endl;
//    putSector.close();
    json data;
    data["Some String"] = "Hello World";
    data["Some Number"] = 420;
    data["Empty Array"] = nlohmann::json::array_t();
    data["Array With Items"] = { true, "Hello", 3.1415 };
    data["Empty Array"] = nlohmann::json::array_t();
    data["Object With Items"] = nlohmann::json::object_t({{"Key", "Value"}, {"Day", true}});
    data["Empty Object"] = nlohmann::json::object_t();

    std::ofstream output_file("settings_example_output.json");
    if (!output_file.is_open()){
        cout << "Fail to open" << endl;
    }
    else {
        output_file << data;
        output_file.close();
    }

}