#pragma once
#include "Masina.h"
#include "TipMasinaDeSpalat.h"
#include "Haina.h"
class MasinaDeSpalat :public Masina  //Clasa MasinaDeSpalat  care mosteneste clasa de baza Masina
{
protected:
	double cantitateDetergent;
	double capacitateMaxima;
	double capacitateActuala;
	bool esteMaiMultDeJumate;
	TipMasinaDeSpalat tip;  //Tip masina de spalat - mica sau mare

public:
	MasinaDeSpalat(double durataDeFunctionare, double capacitateMaxima, double cantitateDetergent);//constructor pentru initializarea proprietalilor
	~MasinaDeSpalat();
	void spala(); //metoda pentru spalare
	//Seturi si geturi pentru proprietatile clasei MasinaDeSpalat
	double getCantitateDetergent(Haina haina);  //Get pentru calcularea de detergent pentru fiecare haina
	double getCapacitateMaxima(); //Capacitatea maxima a masinii de spalat (mica sau mare) valori la libera alegere
	double getCapacitateActuala();//Capacitatea actuala este initializata la inceput 0
	double getEsteMaiMultDeJumate();//scadem capacitateaMaxima si capacitatateaActuala  SI DACA ESTE MAI MICA decat capacitateaMaxima rezulta ca este trecut de jumatate
	TipMasinaDeSpalat getTipMasinaDeSpalat(); //Masina mica sau mare
	void setCapacitateActuala(double valoare);
	void setTipMasinaDeSpalat(TipMasinaDeSpalat valoare);
	
};

