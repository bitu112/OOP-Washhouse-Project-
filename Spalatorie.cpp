#include "pch.h"
#include "Spalatorie.h"


Spalatorie::Spalatorie(int numarDeClienti):mica(30,5,0),mare(50,10,0),uscator(10,10),storcator(15,10)
{   
	this->numarClienti = numarDeClienti;
	clienti = vector<Client>();
	mica.setTipMasinaDeSpalat(TipMasinaDeSpalat::Mica);
	mare.setTipMasinaDeSpalat(TipMasinaDeSpalat::Mare);

}

vector<Client> Spalatorie::getClienti()
{
	return this->clienti;
}

void Spalatorie::setClient(Client client)
{ 
	this->clienti.push_back(client);
}
void Spalatorie::setClienti(vector<Client> clienti)
{ 
	this->clienti = clienti;
}



Spalatorie::~Spalatorie()
{
}
