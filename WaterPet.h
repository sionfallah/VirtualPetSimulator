//Sion Fallah-CSIS 137-Fall 2022- Final
#pragma once
#ifndef WaterPet_h
#define WaterPet_h
#include <string>
#include "VirtualPet.h"
using namespace std;

class WaterPet : public VirtualPet
{
public:
	void setWaterType(string);
	string getWaterType()const;
	WaterPet( string,  string, double,  string);
	virtual void printInfo()const;
private:
	string waterType;
};
#endif
