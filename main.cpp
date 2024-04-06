#include<iostream>
#include "Sector.cpp"
#include "FederalSector.cpp"
using namespace std;
int main()
{
    FederalSector NA1("Lahore");
    cout << NA1.getCode() << endl;
    FederalSector NA2("Islamabad");
    cout << NA2.getCode() << endl;

    return 0;
}