#ifndef OOP_PROJECT_GROUP_F_PROVINCIALSECTOR_H
#define OOP_PROJECT_GROUP_F_PROVINCIALSECTOR_H
#include <iostream>
#include "Sector.h"
using namespace std;

class ProvincialSector : public Sector{
private:
    string provinceName;
    string code;
    static int sectorCode;
public:
    virtual ~ProvincialSector();

public:
    explicit ProvincialSector(const string& sectorDistrict, const string& proName);
    const string &getCode() const;
    void nominateCandidate(const Candidate& candidate) override;

};


#endif //OOP_PROJECT_GROUP_F_PROVINCIALSECTOR_H
