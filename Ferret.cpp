//Sion Fallah-CSIS 137-Fall 2022- Final
#include <iostream>
using namespace std;
#include "Ferret.h"

Ferret::Ferret
( string nme,  string clr, double fee, double lFee, double vFee)
	: DomesticLandPet(" ", " ", 0, 0, 0)
{
	setName(nme);
	setColor(clr);
	setBaseAdoptionFee(fee);
	setLicenseFees(lFee);
	setVetFees(vFee);
	setType();
}

void Ferret::setType()
{
	type = "Ferret";
}

void Ferret::action()const
{
	if (mood == "cotent")
	{
		cout << "Squeak, Squeak.\nYour ferret " << getName() << " is curled up in your lap." << endl;
	}
	else if (mood == "hungry")
	{
		cout << "Whine. Whine.\nYour ferret " << getName() << " is hungry for some meat and fish." << endl;
	}
	else if (mood == "sick")
	{
		cout << getName() << " is curled up in a ball and does not feel well.\nTime to go to the vet!!" << endl;
	}
	else if (mood == "playful")
	{
		cout << getName() << " is playing with a stuffed animal. " << endl;
	}
	else if (mood == "naughty")
	{
		cout << "Jump. Jump. " << getName() << " is jumping all over the place and dropping vases!\nTime to get some new furniture." << endl;
	}
}

void Ferret::printInfo()const
{
	VirtualPet::printInfo();
	cout << "Action:    ";
	action();
}