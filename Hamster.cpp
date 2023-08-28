//Sion Fallah-CSIS 137-Fall 2022- Final
#include <iostream>
using namespace std;
#include "DomesticLandPet.h"
#include "Hamster.h"

Hamster::Hamster
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

void Hamster::setType()
{
	type = "Hamster";
}

void Hamster::action()const
{
	if (mood == "cotent")
	{
		cout << "Purr, purr.\nYour cat " << getName() << " is cuddling in your lap." << endl;
	}
	else if (mood == "hungry")
	{
		cout << "MEOW.MEOW.\nYour cat " << getName() << " hungry for some water and fish." << endl;
	}
	else if (mood == "sick")
	{
		cout << getName() << " is quiet and hiding and doesn't feel well.\nTime to go to the vet!!" << endl;
	}
	else if (mood == "playful")
	{
		cout << getName() << " is playing with a toy mouse. Meow " << endl;
	}
	else if (mood == "naughty")
	{
		cout << "Scratch. Scratch. " << getName() << " is scratching the curtains.\nTime to buy another scratching post or trim nails! " << endl;
	}
}

void Hamster::printInfo()const
{
	VirtualPet::printInfo();
	cout << "Action:    ";
	action();
}