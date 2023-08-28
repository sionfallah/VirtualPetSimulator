//Sion Fallah-CSIS 137-Fall 2022- Final
#include <iostream>
using namespace std;
#include "WaterPet.h"

WaterPet::WaterPet
( string nm,  string clr, double fee, string typ)
    :VirtualPet(" ", " ", 0)
{
    setName(nm);
    setColor(clr);
    setBaseAdoptionFee(fee);
    setWaterType(typ);

}

void WaterPet::setWaterType(string typ)
{
    if (typ == "fresh" || typ == "salt")
    {
        waterType = typ;
    }
    else
    {
        waterType = "fresh";
    }
}

string WaterPet::getWaterType()const
{
    return waterType;
}
void WaterPet::printInfo()const
{
    VirtualPet::printInfo();
    cout << "Water Type:    " << getWaterType() << endl;
}