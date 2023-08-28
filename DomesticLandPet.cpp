//Sion Fallah-CSIS 137-Fall 2022- Final
#include <iostream>
using namespace std;
#include "DomesticLandPet.h"

DomesticLandPet::DomesticLandPet
( string nme,  string clr, double fee, double lFee, double vFee)
	:VirtualPet(" "," ", 0)
{
    setName(nme);
    setColor(clr);
    setBaseAdoptionFee(fee);
	setLicenseFees(lFee);
	setVetFees(vFee);
}


void DomesticLandPet::setLicenseFees(double lFees)
{
	licenseFees = (lFees > 0) ? 10 : lFees;
}

double DomesticLandPet::getLicenseFees()const
{
	return licenseFees;
}

void DomesticLandPet::setVetFees(double vFees)
{
	vetFees = (vFees > 0) ? 80 : vFees;
}

double DomesticLandPet::getVetFees()const
{
	return vetFees;
}

 void DomesticLandPet::setMood(string md) {
    if (md == "content" || md == "hungry" || md == "sick" || md == "playful" || md == "naughty")
    {
        mood = md;
    }
    else
    {
        mood = "content";
    }

}
void DomesticLandPet::changeMood()
{
    int num = rand() % 5 + 1;

    switch (num)
    {
    case 1:
        mood = "content";
        break;
    case 2:
        mood = "hungry";
        break;
    case 3:
        mood = "sick";
    case 4:
        mood = "playful";
    case 5:
        mood = "naughty";
    }
}


double DomesticLandPet::calcAdoptionCost()const
{
    double total;
    total = getBaseAdoptionFee() + licenseFees + vetFees;
    return total;
}