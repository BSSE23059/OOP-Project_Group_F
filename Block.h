#ifndef OOP_PROJECT_GROUP_F_BLOCK_H
#define OOP_PROJECT_GROUP_F_BLOCK_H
#include <iostream>
#include <vector>
#include "Block.h"
#include "Pollingstation.h"
#include "unordered_map"
using namespace std;

class Block {
private:
    string blockCode;
    Pollingstation pollingStation;
    unordered_map<int,Block> blocks;
};


#endif //OOP_PROJECT_GROUP_F_BLOCK_H
