


#include "Candidate.h"
#include <iostream>

Candidate::Candidate(const string& candidateName, int candidateAge, string candidateGender, int voteCount) : Person(candidateName, candidateAge, candidateGender), registrationStatus(false), voteCount(0) {}

bool Candidate::checkRegistrationStatus() const {
    return registrationStatus;
}

void Candidate::generatePaymentSlip() {
    // Assuming a fixed registration fee
    const float registrationFee = 50000.0;
    if (!registrationStatus) {
        paymentSlip = "Generated payment slip for candidate: " + getName() + ". Amount: " + to_string(registrationFee);
        cout << paymentSlip << endl;
    } else {
        cout << "Payment slip already generated for candidate: " << getName() << endl;
    }
}

void Candidate::verifyPersonalDetails() {
    // Assuming personal details verification is successful if all details are provided
    if (getName() != "" && getAge() != 0 && getGender() != "") {
        cout << "Personal details verified for candidate: " << getName() << endl;
    } else {
        cout << "Incomplete personal details for candidate: " << getName() << endl;
    }
}

void Candidate::checkCriminalRecord() {
    // Assuming the candidate's criminal record is checked externally
    // and the result is stored in a boolean variable
    bool hasCriminalRecord = false; // Set to true if candidate has a criminal record
    if (hasCriminalRecord) {
        cout << "Criminal record found for candidate: " << getName() << endl;
        // Set registration status to false if candidate has a criminal record
        registrationStatus = false;
    } else {
        cout << "No criminal record found for candidate: " << getName() << endl;
    }
}

int Candidate::getVoteCount() const {
    return voteCount;
}

void Candidate::setVoteCount(int count) {
    voteCount = count;
}

int Candidate::getAge() {
    return Person::getAge();
}

string Candidate::getGender() {
    return Person::getGender();
}

void Candidate::setRegistrationStatus(bool status) {
    registrationStatus = status;
}

void Candidate::setPosition(const string& pos) {
    position = pos;
}

const string& Candidate::getPosition() const {
    return position;
}

void Candidate::castVote() {
    voteCount++;
}


