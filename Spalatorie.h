#pragma once
#include "Masina.h"
#include "MasinaDeSpalat.h"
#include "Uscator.h"
#include "Storcator.h"
#include "Calcator.h"
#include "Client.h"
#include "vector"
using namespace std;
class Spalatorie
{
protected:
	
	vector<Client> clienti;
	
public:
	MasinaDeSpalat mica; //Facem o masina mica
	MasinaDeSpalat mare; //Facem o masina mare
	Uscator uscator;  //Facem un uscator
	Calcator calcator;  //Facem un calcator
	Storcator storcator; //Facem un storcator
	int numarClienti;  
	Spalatorie(int numarDeClienti);//Initializam in constructor numarul clientilor
	vector<Client> getClienti();
	void setClient(Client client);
	void setClienti(vector<Client> clienti);
	~Spalatorie();
};

