#include "pch.h"
#include "Calcator.h"


Calcator::Calcator()
{
}

void Calcator::calca()
{ 
	vector<Haina>::iterator it;  //Se duce in vectorul de tip listaHaine si seteaza detaliile pentru calcare
	for (it = this->listaHaine.begin(); it != this->listaHaine.end(); it++) {
		Haina h = *it;
		if (h.getGreutate() != 0) {
			
			it->setDetalii_DurataCalcare(getDurataFunctionare(*it));//Pentru detalii avem doar durata de calcare
		}
	}
}

double Calcator::getDurataFunctionare(Haina haina)  //Calcularea duratei de functionare conform cerintei
{
	switch (haina.getDenumireHaina())
	{
	case DenumireHaina::Camasa:
		return 120 * haina.getGreutate();
	case DenumireHaina::Pantalon:
		return 90 * haina.getGreutate();
	case DenumireHaina::Palton:
		return 0;
	case DenumireHaina::Rochie:
		return 30 * haina.getGreutate();
	case DenumireHaina::Geaca:
		return 0;
	case DenumireHaina::Costum:
		return 150 * haina.getGreutatePalton() + 90 * haina.getGreutatePantalon();
	default:
		break;
	}
}


Calcator::~Calcator()
{
}
