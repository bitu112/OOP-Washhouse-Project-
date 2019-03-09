#pragma once
#include "Masina.h"
class Uscator : public Masina //Clasa uscator care mosteneste clasa de baza Masina
{
protected :  
	int numarMaximArticole;   //Numarul maxime de articole pe care le poate lua un uscator
	int numarActualDeArticole; //Numarul actual se initializeaza cu 0 si dupa se adauga 
	bool esteMaiMultDeJumate;  // Scadem numarMaximArticole-numarActualDeArticole si daca e mai mic decat numarMaximArticole atunci este mai mult de jumate
public:
	Uscator(double durataDeFunctionare, int numarMaximDeArticole); //constructor pentru initializarea uscatorului
	//geturi si seturi pentru uscator
	int getNumarActualDeArticole();
	int getNumarMaximArticole();
	bool getEsteMaiMultDeJumate();
	void setNumarActualDeArticole(int value);
	void usuca();  //metoda pentru uscare
	~Uscator();
};

