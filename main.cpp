#include<iostream>
#include "Sector.cpp"
#include "FederalSector.cpp"
#include "ProvincialSector.cpp"
using namespace std;

int main()
{
    FederalSector NA1("Lahore");
    cout << NA1.getCode() << endl;
    FederalSector NA2("Islamabad");
    cout << NA2.getCode() << endl;
    ProvincialSector PP1("Lahore","Punjab");
    cout << PP1.getCode() << endl;
    ProvincialSector PS1("Karachi","Sindh");
    cout << PS1.getCode() << endl;

    return 0;
}