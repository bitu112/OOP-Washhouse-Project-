
#include "pch.h"
#include "Runner.h"

Spalatorie Runner::s = Spalatorie(1); //Initializam spalatoria cu 2 clienti
Runner::Runner()
{
}


Runner::~Runner()
{
}

void Runner::run()
{ 
	adaugaClienti();
}   // Pornire program

void Runner::adaugaClienti()
{
	string nume;
	int numarHaine;
	for (int i = 0; i < s.numarClienti; i++) {
		cout << "Dati numele clientului:";
		cin >> nume;
		cout << endl;
		cout << "Dati numarul de haine ale clientului: " ;
		cin >> numarHaine;
		cout << endl;
		Client c = Client(numarHaine);
		c.setNume(nume);
		adaugaHaineClient(c);
		s.setClient(c);
		adaugaHaineInMasina();
		
	}
}  

void Runner::adaugaHaineClient(Client &client)
{
	double greutate;
	double temperatura;
	bool culoare;
	bool tip;
	int denumire;

	for (int i = 0; i < client.getNumarHaine(); i++) {
		Haina haina = Haina();
		cout << "Introduceti hainele: " << endl;
		cout << "Dati greutate =  ";
		cin >> greutate;
		cout << endl;
		haina.setGreutate(greutate);
		cout << "Dati temperatura specifica =  "; 
		cin >> temperatura;
		cout << endl;
		haina.setTemperaturaSpecifica(temperatura);
		cout << "Dati culoarea (0-colorata 1-inchisa) =  ";
		cin >> culoare;
		cout << endl;
		haina.setCuloare(culoare);
		cout << "Dati tipul hainei (0-grea 1-usoara) =  ";
		cin >> tip;
		cout << endl;
		haina.setTipHaina(tip);

		meniuPentruTipulHaine();
		cin >> denumire;

		switch (denumire)
		{
		case 0: haina.setDenumireHaina(DenumireHaina::Pantalon); break;
		case 1: haina.setDenumireHaina(DenumireHaina::Rochie); break;
		case 2: haina.setDenumireHaina(DenumireHaina::Camasa); break;
		case 3: haina.setDenumireHaina(DenumireHaina::Palton); break;
		case 4: haina.setDenumireHaina(DenumireHaina::Geaca); break;
		case 5: haina.setDenumireHaina(DenumireHaina::Costum); break;
		default:
			break;
		}
		client.setHaina(haina);
	}
}

void Runner::spalaHaine()
{
}
void Runner::adaugaHaineInMasina()
{
	vector<Client> clienti = s.getClienti();
	vector<Client>::iterator it;
	for (it = clienti.begin(); it != clienti.end(); it++) 
	{  
		vector<Haina> haine = it->getHaine(); 
		vector<Haina>::iterator ith;
		for (ith = haine.begin(); ith != haine.end(); ith++) 
		{ 
			if (ith->getTipHaina() == 0)
			{  
				if (s.mica.getEsteMaiMultDeJumate() == 0)
					s.mica.setHaina(*ith);
				else 
				{
					s.mica.spala();
					s.storcator.setHaine(s.mica.getHaine());
					s.storcator.stoarcere();
					s.uscator.setHaine(s.storcator.getHaine());
					s.uscator.usuca();
					s.calcator.setHaine(s.uscator.getHaine());
					s.calcator.calca();
					
				}
					
			}
			else
			{
				if (s.mare.getEsteMaiMultDeJumate() == 0)
					s.mare.setHaina(*ith);
				else
			    s.mare.spala();
				s.storcator.setHaine(s.mare.getHaine());
				s.storcator.stoarcere();
				s.uscator.setHaine(s.storcator.getHaine());
				s.uscator.usuca();
				s.calcator.setHaine(s.uscator.getHaine());
				s.calcator.calca();
			}

		}
	}
	for (it = clienti.begin(); it != clienti.end(); it++)
	{
		it->setHaine(s.calcator.getHaine());
		vector<Haina> haine = it->getHaine();
		vector<Haina>::iterator ith;
		if (it->getNume()!="")
		{
			afiseazaClient(*it);
		}
		
		for (ith = haine.begin(); ith != haine.end(); ith++)
		{
			if (ith->getGreutate()!=0)
			{
				afiseazaDetaliiHaina(*ith);
			}
			
		}
	}
}
void Runner::stoarceHaine()
{
}
void Runner::usucaHaine()
{
}
void Runner::calcaHaine()
{
}
void Runner::afiseazaClient(Client client)
{
	cout << endl;
	cout << "Durata procesului tehnologic pentru clientul : "<<client.getNume()<<endl;
	cout << endl;
}
void Runner::afiseazaDetaliiHaina(Haina haina)
{
	cout << "Durata de spalare " << haina.getDetalii().getDurataSpalare() << endl;
	cout << "Cantitate de detergent folosita: " << haina.getDetalii().getCantitateDetergent() << endl;
	cout << "Durata de stoarcere: " << haina.getDetalii().getDurataStoarcere() << endl;
	cout << "Durata de uscare: " << haina.getDetalii().getDurataUscare() << endl;
	cout << "Durata de calcare: " << haina.getDetalii().getDurataCalcare() << endl;
}

void Runner::meniuPentruTipulHaine()
{
	cout << "Va rog sa alegeti denumirea hainei" << endl;
	cout << "0 - Pantalon " << endl;
	cout << "1 - Rochie" << endl;
	cout << "2 - Camasa" << endl;
	cout << "3 - Palton" << endl;
	cout << "4 - Geaca" << endl;
	cout << "5 - Costum" << endl;
}
