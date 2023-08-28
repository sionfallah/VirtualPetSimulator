//Sion Fallah-CSIS 137-Fall 2022- Final
#pragma once
#ifndef DomesticLandPet_h
#define DomesticLandPet_h
#include <string>
#include "VirtualPet.h"
using namespace std;

class DomesticLandPet : public VirtualPet
{
public:
	DomesticLandPet(string , string, double = 25, double = 80, double = 10);
	void setVetFees(double);
	double getVetFees()const;
	void setLicenseFees(double);
	double getLicenseFees()const;
	virtual void setMood(string);
	virtual double calcAdoptionCost()const;
	virtual void changeMood();
private:
	double vetFees;
	double licenseFees;
};
#endif
