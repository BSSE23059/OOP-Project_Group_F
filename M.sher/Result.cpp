#include "Result.h"
#include <iostream>
#include <fstream>
void Result::showResult() {
    cout << "Election Results:" << endl;
    for (const auto& pair : positionVotesMap) {
        string position = pair.first;
        int votes = pair.second;
        string winner = "";
        int maxVotes = 0;
        for (const auto& candidate : candidateList) {
            if (candidate->getPosition() == position && candidate->getVoteCount() > maxVotes) {
                maxVotes = candidate->getVoteCount();
                winner = candidate->getName();
            }
        }
        cout << "Position: " << position << endl;
       cout << "Winner: " << winner << " with " << maxVotes << " votes" << endl;
    }
}






//void Result::storeResult(const std::map<std::string, int> &positionVotesMap) {
//    std::ofstream outputFile("election_results.txt");
//
//    if (outputFile.is_open()) {
//        outputFile << "Election Results:" << std::endl;
//        for (const auto& pair : positionVotesMap) {
//            outputFile << "Position: " << pair.first << " - Votes: " << pair.second << std::endl;
//        }
//        outputFile.close();
//        std::cout << "Results stored successfully in 'election_results.txt'." << std::endl;
//    } else {
//        std::cerr << "Unable to open file for storing results." << std::endl;
//    }
//}
//
