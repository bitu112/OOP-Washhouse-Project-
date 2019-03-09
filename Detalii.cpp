#include "pch.h"
#include "Detalii.h"


Detalii::Detalii() //Initializam detaliile cu 0
{ 
	this->cantitateDetergent = 0;
	this->durataCalcare = 0;
	this->durataSpalare = 0;
	this->durataStoarcere = 0;
	this->durataUscare = 0;
}


Detalii::~Detalii()
{
}  
//Seturi si geturi pentru proprietati;

void Detalii::setCantitateDetergent(double value)
{
	this->cantitateDetergent = value;
}

void Detalii::setDurataSpalare(double value)
{
	this->durataSpalare = value;
}

void Detalii::setDurataStoarcere(double value)
{
	this->durataStoarcere = value;
}

void Detalii::setDurataUscare(double value)
{
	this->durataUscare = value;
}

void Detalii::setDurataCalcare(double value)
{
	this->durataCalcare = value;
}

double Detalii::getDurataSpalare()
{
	return this->durataSpalare;
}

double Detalii::getDurataStoarcere()
{
	return this->durataStoarcere;
}

double Detalii::getDurataUscare()
{
	return this->durataUscare;
}

double Detalii::getDurataCalcare()
{
	return this->durataCalcare;
}

double Detalii::getCantitateDetergent()
{
	return this->cantitateDetergent;
}
