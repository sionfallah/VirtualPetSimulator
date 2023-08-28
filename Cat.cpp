//Sion Fallah-CSIS 137-Fall 2022- Final
#include <iostream>
using namespace std;
#include "Cat.h"

Cat::Cat
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

void Cat::setType()
{
	type = "Cat";
}

void Cat::action()const
{
	if (mood == "content")
	{
		cout << "Purr, purr.\nYour cat " << getName() << " is cuddling in your lap." << endl;
	}
	else if(mood == "hungry")
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

void Cat::printInfo()const
{
	VirtualPet::printInfo();
	cout << "Action:    ";
	action();
}