#include "PartySymbol.h"

PartySymbol::PartySymbol() {
    partysymbol = "";
}

void PartySymbol::set_partysymbol(std::string pn) {
    partysymbol = pn;
}

string PartySymbol::get_partysymbol(){
    return partysymbol;
}
