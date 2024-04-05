#include "FederalSector.h"


FederalSector::FederalSector() {
    setCode("NA-");
    sectorCode++;
    code = code + to_string(sectorCode);

}

void FederalSector::nominateCandidate(const Candidate &candidate) {
    getCandidates().push_back(candidate);
    setCandidateAdded(true);
    cout << "Your candidate has been successfully added." << endl;
}