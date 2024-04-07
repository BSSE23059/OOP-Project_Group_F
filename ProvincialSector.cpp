#include "ProvincialSector.h"

int ProvincialSector::punjabSectorCode = 0;
int ProvincialSector::kpkSectorCode = 0;
int ProvincialSector::baloachistanSectorCode = 0;
int ProvincialSector::sindhSectorCode = 0;

ProvincialSector::ProvincialSector(const std::string &sectorDistrict, const string& proName) {
    if(proName == "Punjab"){
        code = "PP-";
        punjabSectorCode++;
        code = code + to_string(punjabSectorCode);
    } else if(proName == "Sindh"){
        code = "PS-";
        sindhSectorCode++;
        code = code + to_string(sindhSectorCode);
    } else if(proName == "Khyber Pakhtunkhwa"){
        code = "PK-";
        kpkSectorCode++;
        code = code + to_string(kpkSectorCode);
    } else if(proName == "Baloachistan"){
        code = "PB-";
        baloachistanSectorCode++;
        code = code + to_string(baloachistanSectorCode);
    }
    setDistrict(sectorDistrict);
}

void ProvincialSector::nominateCandidate(const Candidate &candidate) {
    for(int i=0;i<getCandidates().size();i++){
        if(getCandidates()[i].getPartyName() != candidate.getPartyName()){
            getCandidates().push_back(candidate);
            cout << "Your candidate has been successfully added." << endl;
        } else {
            cout << "Your Party has already nominated a candidate in this sector." << endl;
        }
    }
}

const string &ProvincialSector::getCode() const {
    return code;
}

ProvincialSector::~ProvincialSector() {

}
