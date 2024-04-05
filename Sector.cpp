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

void Sector::setCandidateAdded(bool canAdded) {
    candidateAdded = canAdded;
}

void Sector::setCode(std::string strCode) {
    code = std::move(strCode);
}

void Sector::setSectorCode(int secCode) {
    sectorCode = secCode;
}
