#pragma once
#include "HaineFemei.h"

using namespace std;

class Rochie: public HaineFemei {
protected:
	int lungime;
	bool bretele;
public:
	//constructori
	Rochie();
	Rochie(int id, string descriere, float pret, string firma, bool inStoc, Marime marime, string culoare, string material, int nasturi, int lungime, bool bretele);
	Rochie(Rochie& r);
	//operator =
	void operator=(Rochie r);
	//getteri
	int getLungime();
	bool getBretele();
	//setteri
	void setLungime(int lungime);
	void setBretele(bool bretele);
	
	virtual string Afisare();
	virtual void updateTot();
	//destructor
	~Rochie();
};