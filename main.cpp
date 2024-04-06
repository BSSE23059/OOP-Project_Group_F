#include<iostream>
#include "Sector.cpp"
#include "FederalSector.cpp"
#include "ProvincialSector.cpp"
#include "SectorProvider.cpp"
using namespace std;

int main()
{
    FederalSector NA1("Lahore");
    cout << NA1.getCode() << endl;
    FederalSector NA2("Islamabad");
    cout << NA2.getCode() << endl;
    SectorProvider *sectorProvider = SectorProvider::getInstance();

    sectorProvider->addFederalSector(NA1);
    sectorProvider->addFederalSector(NA2);

    return 0;
}