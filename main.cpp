#include<iostream>
#include "Sector.cpp"
#include "FederalSector.cpp"
using namespace std;
int main()
{
    FederalSector NA1;
    cout << NA1.getCode() << endl;
    FederalSector NA2;
    cout << NA2.getCode() << endl;

    return 0;
}