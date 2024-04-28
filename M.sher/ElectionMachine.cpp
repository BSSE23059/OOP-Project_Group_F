


#include "ElectionMachine.h"
#include "Result.h"
#include <algorithm>

Candidate *getCandidateByName(string basicString);

ElectionMachine::ElectionMachine(const vector<Voter*>& voters, const vector<Candidate*>& candidates) : phase(""), voterList(voters), candidateList(candidates) {}

void ElectionMachine::conductElectionPhase() {
    cout << "Enter the phase of the election: ";
    cin >> phase;
    cout << "Election phase: " << phase << endl;
}

void ElectionMachine::displayCandidatesForVoting() {
    cout << "Candidates for voting in " << phase << " phase:" << endl;
    for (const auto& candidate : candidateList) {
        cout << candidate->getName() << " - Position: " << candidate->getPosition() << endl;
    }
}

void ElectionMachine::recordVote(Voter* voter, string candidateName) {
    // ...
    // Implement vote recording logic here
    auto candidate = find_if(candidateList.begin(), candidateList.end(), [&candidateName](const Candidate* c) { return (c->getName()) == (candidateName); });
    if (candidate != candidateList.end()) {
        (*candidate)->castVote();
        voter->setVoted(true);
        Result& result = Result::getInstance();
        result.positionVotesMap[(*candidate)->getPosition()]++;
        cout << "Vote recorded for " << (*candidate)->getName() << endl;
    } else {
        cout << "Candidate is not valid." << endl;
    }
}

void ElectionMachine::countVotes() {
    cout << "Vote count for " << phase << " phase:" << endl;
    for (const auto& candidate : candidateList) {
        cout << candidate->getName() << " - Votes: " << candidate->getVoteCount() << endl;
    }
}


