#include "pch.h"
#include "MasinaDeSpalat.h"


//Initializam masina de spalat
MasinaDeSpalat::MasinaDeSpalat(double durataDeFunctionare, double capacitateMaxima, double cantitateDetergent) : Masina(durataDeFunctionare)
{
	this->capacitateMaxima = capacitateMaxima;
	this->capacitateActuala = 0;
}

MasinaDeSpalat::~MasinaDeSpalat()
{
}
  //Metoda spala -> baga in detalii durata si cantitatea de detergent
void MasinaDeSpalat::spala()
{
	vector<Haina>::iterator it;
	for(it=this->listaHaine.begin(); it!=this->listaHaine.end();it++){
		if (it->getGreutate() != 0) {
			
			it->setDetalii_DurataSpalare(getDurataFunctionare());
			it->setDetalii_CantitateDetergent(getCantitateDetergent(*it));
		}
	}
}

double MasinaDeSpalat::getCantitateDetergent(Haina haina) //Determinarea cantitatii de detergent 
{
	switch (haina.getDenumireHaina())
	{
		case DenumireHaina::Camasa:
			return 50 * haina.getGreutate();
		case DenumireHaina::Pantalon:
			if (haina.getCuloare() == 1)
				return 200 * haina.getGreutate();
			else
				return 100 * haina.getGreutate();
		case DenumireHaina::Palton:
			return 100 * haina.getGreutate();
		case DenumireHaina::Rochie:
			return 50 * haina.getGreutate();
		case DenumireHaina::Costum:
			return 50 * haina.getGreutate();
		case DenumireHaina::Geaca:
			return 50 * haina.getGreutate();
		default:
			break;
	}
}
 //Geturi si seturi pentru proprietati
double MasinaDeSpalat::getCapacitateMaxima()  
{
	return this->capacitateMaxima;
}

double MasinaDeSpalat::getCapacitateActuala()
{
	return this->capacitateActuala;
}

double MasinaDeSpalat::getEsteMaiMultDeJumate()
{
	if (capacitateMaxima - capacitateActuala <= capacitateMaxima / 2)
		return 1;
	return 0;
}

TipMasinaDeSpalat MasinaDeSpalat::getTipMasinaDeSpalat()
{
	return this->tip;
}

void MasinaDeSpalat::setCapacitateActuala(double valoare)
{  
	this->capacitateActuala += valoare;
}

void MasinaDeSpalat::setTipMasinaDeSpalat(TipMasinaDeSpalat valoare)
{  
	this->tip = valoare;
}
