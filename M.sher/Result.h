#ifndef PROJECT_OOP_RESULT_H
#define PROJECT_OOP_RESULT_H

#include <map>
#include <string>
#include "Candidate.h"
#include <vector>

class Result {
private:
 vector<Candidate *> candidateList;

public:
    static Result &getInstance() {
        static Result instance;
        return instance;
    }
void showResult();

 map<string, int> positionVotesMap;
};
#endif // RESULT_H
