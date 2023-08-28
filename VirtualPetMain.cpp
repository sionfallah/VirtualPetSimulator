//Sion Fallah-CSIS 137-Fall 2022- Final
#include <iostream>
#include <fstream>
#include <vector>
#include "VirtualPet.h"
#include "Cat.h"
#include "Dog.h"
#include "Fish.h"
#include "Ferret.h"
#include "Hamster.h"
#include "DomesticLandPet.h"
#include "WaterPet.h"



using namespace std;

int main() {
    vector<VirtualPet*> pets;

    ofstream outfile("PetNames.txt");
    ifstream infile("PetNames.txt");
    char choice = ' ';
    while (choice != 'q' && choice != 'Q') {
        cout << "ADD PET MENU" << endl;
        cout << "1. Add a Cat" << endl;
        cout << "2. Add a Dog" << endl;
        cout << "3. Add a Fish" << endl;
        cout << "4. Add a Ferret" << endl;
        cout << "5. Add a Hamster" << endl;
        cout << "Q. Done Adding Pets" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == '1') {
            string name, color;
            cout << "Enter the name of the cat: ";
            cin >> name;
            cout << "Enter the color of the cat: ";
            cin >> color;

            pets.push_back(new Cat(name, color, 25, 10, 80));
            outfile << "Cat " << name << endl;
        }
        else if (choice == '2') {
            string name, color;
            cout << "Enter the name of the dog: ";
            cin >> name;
            cout << "Enter the color of the dog: ";
            cin >> color;

            pets.push_back(new Dog(name, color, 25, 10, 80));
            outfile << "Dog " << name << endl;
        }
        else if (choice == '3') {
            string name, color, waterTyp;
            cout << "Enter the name of the fish: ";
            cin >> name;
            cout << "Enter the color of the fish: ";
            cin >> color;
            cout << "Enter fresh or salt for type of water: ";
            cin >> waterTyp;

            pets.push_back(new Fish(name, color, waterTyp));
            outfile << "Fish " << name << endl;
        }
        else if (choice == '4') {
            string name, color;
            cout << "Enter the name of the ferret: ";
            cin >> name;
            cout << "Enter the color of the ferret: ";
            cin >> color;

            pets.push_back(new Ferret(name, color, 25, 10, 80));
            outfile << "Ferret " << name << endl;
        }
        else if (choice == '5') {
            string name, color;
            cout << "Enter the name of the Hamster: ";
            cin >> name;
            cout << "Enter the color of the Hamster: ";
            cin >> color;

            pets.push_back(new Hamster(name, color, 25, 10, 80));
            outfile << "Hamster " << name << endl;
        }
        else if (choice == 'q' || choice == 'Q')
        {
            cout << "Next file opening." << endl;
        }
        else {
            cout << "Invalid selection. Please try again." << endl;
        }
    }
    choice = 'v';
    while (choice != 'q' && choice != 'Q')
    {

        cout << endl << "PET PROCESSING MENU" << endl;
        cout << "1. Print All Pet Info" << endl;
        cout << "2. Print PetNames.txt" << endl;
        cout << "Q. Quit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == '1') {
            cout << endl << "These are your pets: " << endl;

            for (int i = 0; i < pets.size(); i++) {
                pets[i]->changeMood();
                pets[i]->printInfo();
            }
        }
        else if (choice == '2') {
            cout << endl << "Pet Types and Names:" << endl;

            string type, name;
            while (infile >> type >> name) {
                cout << type << " " << name << endl;
            }

            infile.clear();
            infile.seekg(0, ios::beg);
        }
        else if (choice == 'q' || choice == 'Q')
        {
            cout << "Thank you." << endl;
        }
        else {

            cout << "Invalid selection. Please try again." << endl;
        }
    }

        outfile.close();
}
