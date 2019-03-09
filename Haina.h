#pragma once
#include "DenumireHaina.h"
#include "Detalii.h"  
class Haina // clasa Haina in care memoram toate proprietatile unei haine
{   //proprietatile hainei
private:
	double greutate;
	double greutatePantalon;
	double greutatePalton;
	double temperaturaSpecifica;
	bool culoare; // 0-alba  1-colorata
	bool tipHaina; // 0-usoara 1-grea
	DenumireHaina denumire;
	Detalii detalii;
public:
	Haina();
	~Haina();  
	 //seturi si geturi pentru proprietatile unei haine
	void setGreutate(double valoare);
	void setGreutatePantalon(double valoare);
	void setGreutatePalton(double valoare);
	void setTemperaturaSpecifica(double valoare);
	void setCuloare(bool valoare);
	void setTipHaina(bool valoare);
	void setDenumireHaina(DenumireHaina valoare);
	void setDetalii_CantitateDetergent(double value);
	void setDetalii_DurataSpalare(double value);
	void setDetalii_DurataStoarcere(double value);
	void setDetalii_DurataUscare(double value);
	void setDetalii_DurataCalcare(double value);
	Detalii getDetalii();
	double getGreutate();
	double getGreutatePantalon();
	double getGreutatePalton();
	double getTemperaturaSpecifica();
	bool getCuloare();
	bool getTipHaina();
	DenumireHaina getDenumireHaina();
};

