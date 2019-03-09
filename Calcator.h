#pragma once
#include "Masina.h" 
 //Clasa calcator care mosteneste clasa de baza Masina
class Calcator :public Masina    
{
protected:
	bool esteOcupat;
public:
	Calcator(); //Constructor Calcator
	void calca();  // Metoda pentru calcare
	double getDurataFunctionare(Haina haina);  // Durata de functionare
	~Calcator();
};

