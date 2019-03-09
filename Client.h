#pragma once
#include <vector>
#include<string>
#include"Haina.h"
using namespace std; 
 //Clasa pentru client
class Client
{
private:
	vector<Haina> haine;   //Vector stl pentru haine
	int numarulDeHaine;  
	string nume;
public:
	Client();
	Client(int nrHaine);  //Constructor Client care initializeaza numarul de haine
	~Client();
	   //Seturi si geturi pentru proprietati
	void setNume(string value); 
	void setHaine(vector<Haina> haine);
	void setHaina(Haina haina);
	string getNume();
	vector<Haina> getHaine();
	int getNumarHaine();
};

