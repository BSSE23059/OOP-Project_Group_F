#ifndef OOP_PROJECT_GROUP_F_FEDERALSECTOR_H
#define OOP_PROJECT_GROUP_F_FEDERALSECTOR_H
#include <iostream>
#include "Sector.h"
using namespace std;


class FederalSector : public Sector{
private:
    string code;
    static int sectorCode;
public:
    explicit FederalSector(const string& sectorDistrict);
    const string &getCode() const;
    void nominateCandidate(const Candidate& candidate) override;
};


#endif //OOP_PROJECT_GROUP_F_FEDERALSECTOR_H
