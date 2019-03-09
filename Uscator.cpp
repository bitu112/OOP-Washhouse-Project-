#include "pch.h"
#include "Uscator.h"



Uscator::Uscator(double durataDeFunctionare, int numarMaximDeArticole):Masina(durataDeFunctionare)  //Initializam uscatorul 
{ 
	this->durataFunctionare = durataDeFunctionare;
	numarActualDeArticole = 0;
}
//Geturi si seturi uscator
int Uscator::getNumarActualDeArticole()
{ 
	return this->numarActualDeArticole;
}

int Uscator::getNumarMaximArticole()
{
	return numarMaximArticole;
}

bool Uscator::getEsteMaiMultDeJumate() //verificam daca uscatorul este umplut mai mult de jumatate
{
	if (numarMaximArticole - numarActualDeArticole <= numarMaximArticole / 2)
		return 1;
	return 0;
}

void Uscator::setNumarActualDeArticole(int value)  //Setam numarul de articole actuala, adaugam meureu cand se apeleaza
{
	this->numarActualDeArticole += value;
}

void Uscator::usuca()  //Adaugam in detalii durata de uscare 
{
	vector<Haina>::iterator it;
	for (it = this->listaHaine.begin(); it != this->listaHaine.end(); it++) {
		Haina h = *it;
		if (h.getGreutate() != 0) {
			
			it->setDetalii_DurataUscare(getDurataFunctionare());
		}
	}
}

Uscator::~Uscator()
{
}
