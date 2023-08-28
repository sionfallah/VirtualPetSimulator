//Sion Fallah-CSIS 137-Fall 2022- Final
#pragma once
#ifndef Dog_h
#define Dog_h
#include <string>
#include "DomesticLandPet.h"
using namespace std;

class Dog : public DomesticLandPet
{
public:
	Dog( string,  string, double = 25, double = 80, double = 10);
	virtual void printInfo()const;
protected:
	virtual void setType();
	virtual void action()const;
};
#endif
