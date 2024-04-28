#ifndef PROJECT_OOP_CANDIDATE_H
#define PROJECT_OOP_CANDIDATE_H



#include "Person.h"

class Candidate : public Person {
private:
    bool registrationStatus;
    string paymentSlip;
    string position;
    int voteCount;

public:
    bool valid;
    Candidate(const string& candidateName, int candidateAge, string candidateGender, int voteCount);
    bool checkRegistrationStatus() const;
    void generatePaymentSlip();
    void verifyPersonalDetails();
    void checkCriminalRecord();
    const string& getPosition() const;
    void setPosition(const string& pos);
    int getVoteCount() const;
    void setVoteCount(int count);
    string getGender();
    int getAge();
    void setRegistrationStatus(bool status);
    bool isValid() const { return valid; }
    void castVote();
    int votes;
};


#endif // CANDIDATE_H
