#include "pch.h"
#include "Client.h"

//Creem metodele pentru client
Client::Client()
{
}

Client::Client(int nrHaine)
{
	this->numarulDeHaine = nrHaine;
	haine = vector<Haina>(nrHaine);
}

Client::~Client()
{
}

void Client::setNume(string value)
{
	this->nume = value;
}

void Client::setHaine(vector<Haina> haine)
{
	this->haine = haine;
}

void Client::setHaina(Haina haina)
{
	this->haine.push_back(haina);
}

string Client::getNume()
{
	return this->nume;
}

vector<Haina> Client::getHaine()
{
	return this->haine;
}

int Client::getNumarHaine()
{
	return this->numarulDeHaine;
}
