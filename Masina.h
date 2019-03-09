#pragma once
#include "Haina.h"
#include "Masina.h"
#include <vector>
using namespace std;
class Masina  //Clasa Masina cu care am creat masina de spalat,uscator, calcator,storcator
{  //Proprietatile clasei Masina
protected:
	double durataFunctionare;
	vector<Haina> listaHaine;
public:

	Masina(double durata);//Constructor Masina pentru initializarea duratei de functionare
	Masina();
	~Masina(); 
	//Seturi vector de haine ,haina si get pentru durata de functionare
	double getDurataFunctionare();
	void setHaine(vector<Haina> haina);
	void setHaina(Haina haina);
	vector<Haina> getHaine();
	
};

