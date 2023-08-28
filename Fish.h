//Sion Fallah-CSIS 137-Fall 2022- Final
#pragma once
#ifndef Fish_h
#define Fish_h
#include <string>
#include "WaterPet.h"
using namespace std;

class Fish : public WaterPet
{
public:
	Fish( string,  string,  string, double = 25);
	virtual void printInfo()const;
protected:
	virtual void setType();
	virtual void action()const;
};
#endif
