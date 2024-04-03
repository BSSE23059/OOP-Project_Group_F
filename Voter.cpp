#include "Voter.h"

Voter::Voter(const std::string &voterName, const std::string &voterId, int voterAge, bool voterGender,
             const std::string &contact) {
    setPersonName(voterName);
    setId(voterId);
    setAge(voterAge);
    setGender(voterGender);
    setContact(contact);
    isRegistered = false;
    castStatus = false;
    timeOfVote = time(0);
}

void Voter::setPollingStationId(const string &pollingStationId) {
    pollingStationID = pollingStationId;
}

void Voter::setIsRegistered(bool voterIsRegistered) {
    isRegistered = voterIsRegistered;
}

void Voter::setCastStatus(bool voterCastStatus) {
    castStatus = voterCastStatus;
}

void Voter::setTimeOfVote(time_t currentTime) {
    timeOfVote = currentTime;
}

void Voter::castVote(const Candidate &candidate) {
    // We'd see if this voter exists in the same sector as the candidate,
    // If they had same sectors than we would enable voter to vote for him.
}