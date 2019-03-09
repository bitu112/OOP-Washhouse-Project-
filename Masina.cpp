#include "pch.h"
#include "Masina.h"



Masina::Masina(double durata)  //initializam masina 
{  
	durataFunctionare = durata;
	listaHaine = vector<Haina>(1);
}

Masina::Masina()
{
}

Masina::~Masina()
{
}
 //Seturi si geturi pentru proprietati

double Masina::getDurataFunctionare()
{
	return this->durataFunctionare;
}

void Masina::setHaine(vector<Haina> haine)
{
	this->listaHaine = haine;
}

void Masina::setHaina(Haina haina)
{
	listaHaine.push_back(haina);
}

vector<Haina> Masina::getHaine()
{
	return this->listaHaine;
}
