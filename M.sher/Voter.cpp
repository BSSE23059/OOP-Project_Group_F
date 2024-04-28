


#include "Voter.h"

Voter::Voter(const string& voterName, int voterAge, string voterGender, const string& id, const string& cnic) : Person(voterName, voterAge, voterGender), voterID(id), CNIC(cnic) {}

Voter::~Voter() {}

void Voter::voteForCandidate(Candidate* candidate) {
    if (candidate != nullptr && !hasVoted()) {
        candidate->castVote();
        cout << "Vote cast successfully for candidate: " << candidate->getName() << endl;
    } else {
        cout << "Invalid candidate or already voted." << endl;
    }
}

const string& Voter::getVoterID() const {
    return voterID;
}

void Voter::setVoterID(const string& id) {
    voterID = id;
}

const string& Voter::getCNIC() const {
    return CNIC;
}

void Voter::setCNIC(const string& cnic) {
    CNIC = cnic;
}

bool Voter::hasVoted() {
    return false;
}

void Voter::setVoted(bool b) {
    return;
}


