#include "pch.h"
#include "Haina.h"


Haina::Haina()  //Initializam proprietatile hainei cu 0
{
	this->greutate = 0.0;
	this->temperaturaSpecifica = 0.0;
	this->culoare = 0;
	this->tipHaina = 0;
	detalii = Detalii();
}


Haina::~Haina()
{
} 
//Seturi si geturi pentru proprietaile hainei

void Haina::setGreutate(double valoare)
{
	this->greutate = valoare;
}

void Haina::setGreutatePantalon(double valoare)
{
	this->greutatePantalon = valoare;
}

void Haina::setGreutatePalton(double valoare)
{
	this->greutatePalton = valoare;
}

void Haina::setTemperaturaSpecifica(double valoare)
{
	this->temperaturaSpecifica = valoare;
}

void Haina::setCuloare(bool valoare)
{
	this->culoare = valoare;
}

void Haina::setTipHaina(bool valoare)
{
	this->tipHaina = valoare;
}

void Haina::setDenumireHaina(DenumireHaina valoare)
{
	this->denumire = valoare;
}



void Haina::setDetalii_CantitateDetergent(double value)
{
	this->detalii.setCantitateDetergent(value);
}

void Haina::setDetalii_DurataSpalare(double value)
{
	return this->detalii.setDurataSpalare(value);
}

void Haina::setDetalii_DurataStoarcere(double value)
{
	return this->detalii.setDurataStoarcere(value);
}

void Haina::setDetalii_DurataUscare(double value)
{
	return this->detalii.setDurataUscare(value);
}

void Haina::setDetalii_DurataCalcare(double value)
{
	return this->detalii.setDurataCalcare(value);
}

Detalii Haina::getDetalii()
{
	return  this->detalii;;
}

double Haina::getGreutate()
{
	return this->greutate;
}

double Haina::getGreutatePantalon()
{
	return this->greutatePantalon;
}

double Haina::getGreutatePalton()
{
	return this->greutatePalton;
}

double Haina::getTemperaturaSpecifica()
{
	return this->temperaturaSpecifica;
}

bool Haina::getCuloare()
{
	return this->culoare;
}

bool Haina::getTipHaina()
{
	return this->tipHaina;
}

DenumireHaina Haina::getDenumireHaina()
{
	return this->denumire;
}
