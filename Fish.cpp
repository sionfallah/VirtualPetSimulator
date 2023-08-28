//Sion Fallah-CSIS 137-Fall 2022- Final
#include <iostream>
using namespace std;
#include "Fish.h"

Fish::Fish
( string nme, string clr, string, double fee)
	: WaterPet(" ", " ", 0, " ")
{
	setName(nme);
	setColor(clr);
	setBaseAdoptionFee(fee);
	setType();
}

void Fish::setType()
{
	type = "Fish";
}

void Fish::action()const
{
	if (mood == "cotent")
	{
		cout << "Swish swish.\nYour fish " << getName() << " is casually swimming." << endl;
	}
	else if (mood == "hungry")
	{
		cout << "SWISH SWISH SWISH!\n" << getName() << " s swimming to the  top of the tank looking for food! " << endl;
	}
	else if (mood == "sick")
	{
		cout << getName() << " is hiding behind a rock and doesn’t feel well.\nTime to call the vet!!" << endl;
	}
}

void Fish::printInfo()const
{
	VirtualPet::printInfo();
	cout << "Water Type:	" << getWaterType() << endl;
	cout << "Action:    ";
	action();
}