#pragma once
#include "Haina.h"
#include "Detalii.h"
#include "Masina.h"
class Storcator:public Masina  //Clasa Storcator care mosteneste clasa de baza Masina
{ 
protected:
	double greutateMaxima;
	bool esteMaiMultDeJumate;
	double greutateActuala;
public:
	Storcator(double durataFunctionare,double greutateMaxima); //Initializam storcatorul cu durata de functionare si greutatea maxima
	double getGreutateMaxim();
	double getGreutateActuala();
	bool getEsteMaiMultDeJumatate();
	void setGreutateActuala(double valoare);
	void stoarcere();  //Metoda pentru stoarcere
	double getDurata(Haina haina);
	~Storcator();
};

