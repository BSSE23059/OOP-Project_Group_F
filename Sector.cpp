#include "Sector.h"

#include <utility>

int Sector::sectorCode =0;

Sector::Sector() {
    cout << "Constructor called." << endl;
}

string Sector::getCode() {
    return code;
}

vector<Candidate> &Sector::getCandidates() {
    return candidates;
}

void Sector::setCode(std::string strCode) {
    code = std::move(strCode);
}


const string &Sector::getDistrict() const {
    return district;
}

void Sector::setDistrict(const string &sectorDistrict) {
    district = sectorDistrict;
}
