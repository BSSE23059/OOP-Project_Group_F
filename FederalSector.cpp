#include "FederalSector.h"

FederalSector::FederalSector(const string& sectorDistrict) {

    setCode("NA-");
    sectorCode++;
    code = code + to_string(sectorCode);
}

void FederalSector::nominateCandidate(const Candidate &candidate) {
    for(int i=0;i<getCandidates().size();i++){
        if(getCandidates()[i].getPartyName() != candidate.getPartyName()){
            getCandidates().push_back(candidate);
            cout << "Your candidate has been successfully added." << endl;
        } else {
            cout << "Your Party has already nominated a candidate in this sector." << endl;
        }
    }
}
