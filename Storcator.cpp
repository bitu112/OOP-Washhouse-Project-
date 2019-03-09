#include "pch.h"
#include "Storcator.h"





Storcator::Storcator(double durataFunctionare, double greutateMaxima):Masina(durataFunctionare)
{
	greutateActuala = 0;
	this->greutateMaxima = greutateMaxima;
}

double Storcator::getGreutateMaxim()
{
	return this->greutateMaxima;
}

double Storcator::getGreutateActuala()
{
	return this->greutateActuala;
}

bool Storcator::getEsteMaiMultDeJumatate()
{
	if (greutateMaxima - greutateActuala <= greutateMaxima / 2)
		return 1;
	return 0;
}

void Storcator::setGreutateActuala(double valoare)
{
	this->greutateActuala += valoare;
}

void Storcator::stoarcere()
{ 
	vector<Haina>::iterator it;
	for (it = this->listaHaine.begin(); it != this->listaHaine.end(); it++) {
		Haina h = *it;
		if (h.getGreutate() != 0) {
			
			it->setDetalii_DurataStoarcere(getDurataFunctionare());
		}
	}
}

double Storcator::getDurata(Haina haina)
{
	switch (haina.getDenumireHaina())
	{
	case DenumireHaina::Camasa:
		return this->durataFunctionare;
	case DenumireHaina::Pantalon:
		 return this->durataFunctionare;
	case DenumireHaina::Palton:
		return 0;
	case DenumireHaina::Rochie:
		return this->durataFunctionare;
	case DenumireHaina::Geaca:
		return 0;
	case DenumireHaina::Costum:
		return this->durataFunctionare;
	default:
		break;
	}
}

Storcator::~Storcator()
{
}
