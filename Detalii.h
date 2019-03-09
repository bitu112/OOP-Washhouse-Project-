#pragma once  
 //Clasa detalii pentru afisarea procesului tehnologic cu care functionaeaza spalatoria
class Detalii
{
private:
	double cantitateDetergent;
	double durataSpalare;
	double durataStoarcere;
	double durataUscare;
	double durataCalcare;
public:
	Detalii();
	~Detalii();
	//Seturi si geturi pentru proprietatile clasei Detalii
	void setCantitateDetergent(double value);
	void setDurataSpalare(double value);
	void setDurataStoarcere(double value);
	void setDurataUscare(double value);
	void setDurataCalcare(double value);
	double getDurataSpalare();
	double getDurataStoarcere();
	double getDurataUscare();
	double getDurataCalcare();
	double getCantitateDetergent();
};

