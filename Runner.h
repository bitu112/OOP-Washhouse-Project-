#pragma once
#include <iostream>
#include "Calcator.h"
#include "Client.h"
#include "Haina.h"
#include "Spalatorie.h"
using namespace std;


class Runner
{
public:
	 static  Spalatorie s;  //Creem o spalatorie
	Runner();
	~Runner();
	static void run(); //Rulare program
	static void adaugaClienti();  
	static void adaugaHaineClient(Client &client); 
	static void spalaHaine();
	static void adaugaHaineInMasina();
	static void stoarceHaine();
	static void usucaHaine();
	static void calcaHaine();
	static void afiseazaClient(Client client);
	static void afiseazaDetaliiHaina(Haina haina);
	static void meniuPentruTipulHaine();
};

