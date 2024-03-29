// OOPWashhouseProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include"Haina.h"
#include "Client.h"
#include "Masina.h"
#include "MasinaDeSpalat.h"
#include "Uscator.h"
#include "Storcator.h"
#include "Calcator.h"
#include "Spalatorie.h"
#include "Runner.h"
// Teste 
void TestHaina1()
{
	Haina h = Haina();
	h.setGreutate(5);
	std::cout << h.getGreutate();
} 

void TestDetalii1()
{
	Detalii d = Detalii();
	d.setCantitateDetergent(200);
	std::cout << d.getCantitateDetergent();
}

void TestClient1()
{
	Client c = Client(2);
	Haina h = Haina();
	h.setTipHaina( 0);
	c.setHaina(h);
	std::cout << c.getHaine()[0].getTipHaina();
}

void TestMasina1() 
{
	Masina m = Masina(10);
	Haina h = Haina();
	h.setCuloare(1);
	m.setHaina(h);
	std::cout << m.getHaine()[0].getCuloare();
}

void TestMasini() {
	MasinaDeSpalat m = MasinaDeSpalat(10,10,100);
	m.setCapacitateActuala(2);
	m.setCapacitateActuala(2);
	m.setTipMasinaDeSpalat(TipMasinaDeSpalat::Mare);
	Haina Geaca = Haina();
	Haina Camasa = Haina();
	Geaca.setGreutate(15);
	Geaca.setDenumireHaina(DenumireHaina::Geaca);
	Camasa.setGreutate(20);
	Camasa.setDenumireHaina(DenumireHaina::Camasa);
	m.setHaina(Geaca);
	m.setHaina(Camasa);
	m.spala();
	cout << "TM" << m.getTipMasinaDeSpalat()<< endl;
	cout <<"CA"<< m.getCapacitateActuala() << endl;
	cout <<"MJ"<< m.getEsteMaiMultDeJumate() << endl;
	vector<Haina> haine = m.getHaine();
	vector<Haina> ::iterator it;
	for (it=haine.begin(); it != haine.end(); it++) {
		Haina h = *it;
		if (h.getGreutate() > 0) {
			cout << "CantD" << h.getDetalii().getCantitateDetergent() << endl;
			cout << "DS" << h.getDetalii().getDurataSpalare() << endl << endl;
		}
	 }
	

}
void TestUscator() {
	Uscator u = Uscator(10, 5);
	u.setNumarActualDeArticole(2);
	u.setNumarActualDeArticole(3);
	cout << "NA" << u.getNumarActualDeArticole() << endl;
	cout << "UMJ" << u.getEsteMaiMultDeJumate() << endl;
	Haina Geaca = Haina();
	Haina Camasa = Haina();
	Geaca.setGreutate(15);
	Geaca.setDenumireHaina(DenumireHaina::Geaca);
	Camasa.setGreutate(20);
	Camasa.setDenumireHaina(DenumireHaina::Camasa);
	u.setHaina(Geaca);
	u.setHaina(Camasa);
	u.usuca();
	
	vector<Haina> haine = u.getHaine();
	vector<Haina> ::iterator it;
	for (it = haine.begin(); it != haine.end(); it++) {
		Haina h = *it;
		if (h.getGreutate() > 0) {
			
			cout << "DU" << h.getDetalii().getDurataUscare() << endl << endl;
		}
	}
}
void TestStorcator() {
	Storcator s = Storcator(10, 50);
	s.setGreutateActuala(15);
	s.setGreutateActuala(5);
	cout << "GA" << s.getGreutateActuala() << endl;
	cout << "DF" << s.getDurataFunctionare() << endl;
	cout << "MJ" << s.getEsteMaiMultDeJumatate() << endl;
	Haina Geaca = Haina();
	Haina Camasa = Haina();
	Geaca.setGreutate(15);
	Geaca.setDenumireHaina(DenumireHaina::Geaca);
	Camasa.setGreutate(20);
	Camasa.setDenumireHaina(DenumireHaina::Camasa);
	s.setHaina(Geaca);
	s.setHaina(Camasa);
	s.stoarcere();

	vector<Haina> haine = s.getHaine();
	vector<Haina> ::iterator it;
	for (it = haine.begin(); it != haine.end(); it++) {
		Haina h = *it;
		if (h.getGreutate() > 0) {

			cout << "DS" << h.getDetalii().getDurataStoarcere() << endl << endl;
		}
	}
}
void TestCalcator() {
	Calcator c = Calcator();
	Haina haina = Haina();
	haina.setDenumireHaina(DenumireHaina::Camasa);
	haina.setGreutate(10);
	cout<<c.getDurataFunctionare(haina);
	Haina Geaca = Haina();
	Haina Camasa = Haina();
	Geaca.setGreutate(15);
	Geaca.setDenumireHaina(DenumireHaina::Geaca);
	Camasa.setGreutate(20);
	Camasa.setDenumireHaina(DenumireHaina::Camasa);
	c.setHaina(Geaca);
	c.setHaina(Camasa);
	c.calca();

	vector<Haina> haine = c.getHaine();
	vector<Haina> ::iterator it;
	for (it = haine.begin(); it != haine.end(); it++) {
		Haina h = *it;
		if (h.getGreutate() > 0) {

			cout << "DC" << h.getDetalii().getDurataCalcare() << endl << endl;
		}
	}
}
void TestSpalatorie() {
	Spalatorie s = Spalatorie(2);
	Client Vasile = Client(1);
	Client Cristi = Client(2);
	Cristi.setNume("Cristi");
	Vasile.setNume("Vasile");
	s.setClient(Cristi);
	s.setClient(Vasile);
	Haina Geaca = Haina();
	Haina Camasa = Haina();
	Geaca.setGreutate(15);
	Geaca.setDenumireHaina(DenumireHaina::Geaca);
	Camasa.setGreutate(20);
	Camasa.setDenumireHaina(DenumireHaina::Camasa);
	Vasile.setHaina(Geaca);
	Cristi.setHaina(Camasa);

	vector <Client> clienti = s.getClienti();
	vector<Client>::iterator it;
	for( it = clienti.begin();it!=clienti.end(); it++)
	{
		Client c = *it;
		cout<<"Cl "<<c.getNume()<<endl;
	}

}

int main() {

	//TestHaina1(); //trecut
	//TestDetalii1(); //trecut
	//TestClient1(); //trecut
	//TestMasina1(); //trecut
	//TestMasini(); //trecut
	//TestStorcator(); //trecut
	//TestCalcator(); //TRECUT
	//TestUscator();
	/*TestSpalatorie();*/
	Runner::run();
	return 0;
}



