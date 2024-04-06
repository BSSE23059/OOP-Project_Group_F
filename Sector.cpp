#include "Sector.h"
#include <utility>

Sector::Sector() = default;


vector<Candidate> &Sector::getCandidates() {
    return candidates;
}


const string &Sector::getDistrict() const {
    return district;
}

void Sector::setDistrict(const string &sectorDistrict) {
    district = sectorDistrict;
}
