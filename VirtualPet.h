//Sion Fallah-CSIS 137-Fall 2022- Final
#pragma once
#ifndef VirtualPet_h
#define VirtualPet_h
#include <string>
using namespace std;
class VirtualPet
{
private:
    string name;  //name of the pet
    string color;  //color of the pet
    double baseAdoptionFee;  //base adoption fee for all pet types, default value $25

protected:
    string mood;
    string type;  //represents the type of Pet for example:  "Dog", "Cat" etc.
    virtual void setType() = 0;
public:
    VirtualPet(string, string, double = 0);//pass in name, color, base adoptionFee
    void setName(string);
    string getName()const;
    string getType()const;
    void setColor(string);
    string getColor()const;
    string getMood()const;
    virtual void setMood(string);
    double getBaseAdoptionFee()const;
    void setBaseAdoptionFee(double = 25.0);
    virtual double calcAdoptionCost()const;
    virtual void printInfo()const;
    virtual void changeMood();
    virtual void action()const = 0;
};
#endif