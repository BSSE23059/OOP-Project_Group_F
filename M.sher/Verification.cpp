


#include "Verification.h"
#include <iostream>

Verification::Verification(Candidate* cand) : candidate(cand), personalDetailsVerification(false), registrationFeeStatus(false), taxPaymentStatus(false) {}

void Verification::checkRegistrationFeePayment() {
    // Assuming the payment slip is generated only if the registration status is false
    if (!candidate->checkRegistrationStatus()) {
        registrationFeeStatus = true;
        cout << "Registration fee payment verified for candidate: " << candidate->getName() << endl;
    } else {
        cout << "Registration fee payment pending for candidate: " << candidate->getName() << endl;
    }
}

void Verification::verifyPersonalDetails() {
    // Assuming personal details verification is successful if all details are provided
    if (candidate->getName() != "" && candidate->getAge() != 0 && candidate->getGender() != "") {
        personalDetailsVerification = true;
        cout << "Personal details verified for candidate: " << candidate->getName() << endl;
    } else {
        cout << "Incomplete personal details for candidate: " << candidate->getName() << endl;
    }
}

void Verification::checkTaxPayment() {
    // Assuming tax payment verification logic
    // If tax payment is verified, set taxPaymentStatus to true
    // For example:
    bool taxPaid = true;
    if (taxPaid) {
        taxPaymentStatus = true;
        cout << "Tax payment verified for candidate: " << candidate->getName() << endl;
    } else {
        cout << "Tax payment pending for candidate: " << candidate->getName() << endl;
    }
}

void Verification::checkCriminalRecord(Candidate* candidate) {
    // Assume a list of criminal records
    vector<string> criminalRecords = {"John Doe", "Jane Smith"};
    // Check if the candidate's name is in the list
    if (find(criminalRecords.begin(), criminalRecords.end(), candidate->getName()) != criminalRecords.end()) {
        candidate->setRegistrationStatus(false);
        cout << "Candidate has a criminal record. Registration status set to false." << endl;
    } else {
        cout << "Candidate has no criminal record." << endl;
    }
}


