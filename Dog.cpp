//Sion Fallah-CSIS 137-Fall 2022- Final
#include <iostream>
using namespace std;
#include "Dog.h"

Dog::Dog
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

void Dog::setType()
{
	type = "Dog";
}

void Dog::action()const
{
	if (mood == "content")
	{
		cout << "Stretch and snore.\nYour dog " << getName() << " is sleeping next to you." << endl;
	}
	else if (mood == "hungry")
	{
		cout << "RUFF RUFF!!\n" << getName() << " is hungry for some food and treats" << endl;
	}
	else if (mood == "sick")
	{
		cout << "Whine, cry, sad dog eyes.\n" <<  getName() << " Fluffy doesn’t feel well.\nTime to go to the vet!!" << endl;
	}
	else if (mood == "playful")
	{
		cout << getName() << " brought you a ball. Throw it and play fetch! " << endl;
	}
	else if (mood == "naughty")
	{
		cout << "Chew. Chew.  " << getName() << " chewed up a magazine.\nTime to buy more toys or go to obedience class! " << endl;
	}
}

void Dog::printInfo()const
{
	VirtualPet::printInfo();
	cout << "Action:    ";
	action();
}