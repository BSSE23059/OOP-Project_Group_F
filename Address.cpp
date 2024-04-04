#include "Address.h"
Address::Address() {
    province="";
    district="";
    unionCouncil="";
    block="";
    houseNum=0;
    streetNum=0;
}
Address::Address(std::string province, std::string district, std::string uncouncil, std::string block, int housenm,int streetnm)
{
    setprovice(province);
    set_disrict(district);
    set_Unioncouncil(uncouncil);
    set_block(block);
    set_HouseNum(housenm);
    set_StreetNum(streetnm);
}

void Address::setprovice(std::string prvn) {province=prvn;}
void Address::set_Unioncouncil(std::string uncoun) {unionCouncil=uncoun;}
void Address::set_block(std::string blck) {block=blck;}
void Address::set_StreetNum(int stnum) {streetNum=stnum;}
void Address::set_HouseNum(int hnum) {houseNum=hnum;}
void Address::set_disrict(std::string dist) {district=dist;}

int Address::get_HouseNum() {return houseNum;}
int Address::get_StreetNum() {return streetNum;}
string Address::get_Unioncouncil() {return unionCouncil;}
string Address::get_block() {return block;}
string Address::get_disrict() {return district;}
string Address::get_provice() {return province;}