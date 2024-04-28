#ifndef PROJECT_OOP_ELECTIONMACHINE_H
#define PROJECT_OOP_ELECTIONMACHINE_H

#include <iostream>
#include <vector>
#include "Voter.h"
#include "Candidate.h"

class ElectionMachine {
private:
    string phase;
    vector<Voter*> voterList;
    vector<Candidate*> candidateList;

public:
    ElectionMachine(const vector<Voter*>& voters, const vector<Candidate*>& candidates);
    void conductElectionPhase();
    void displayCandidatesForVoting();
    void recordVote(Voter* voter, string CandidateName);
    void countVotes();
};

#endif // ELECTIONMACHINE_H
