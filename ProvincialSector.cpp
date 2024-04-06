#include "ProvincialSector.h"

int ProvincialSector::sectorCode = 0;

ProvincialSector::ProvincialSector(const std::string &sectorDistrict, const string& proName) {
    if(proName == "Punjab"){
        code = "PP-";
        sectorCode++;
    } else if(proName == "Sindh"){
        code = "PS-";
        sectorCode++;
    } else if(proName == "Khyber Pakhtunkhwa"){
        code = "PK-";
        sectorCode++;
    } else if(proName == "Baloachistan"){
        code = "PB-";
        sectorCode++;
    }

    code = code + to_string(sectorCode);
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
