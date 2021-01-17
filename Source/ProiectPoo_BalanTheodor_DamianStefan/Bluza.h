#pragma once
#include "HaineFemei.h"

using namespace std;

class Bluza : public HaineFemei {
protected:
	bool sclipici;
public:
	//constructori
	Bluza();
	Bluza(int id, string descriere, float pret, string firma, bool inStoc, Marime marime, string culoare, string material, int nasturi, bool sclipici);
	Bluza(Bluza& r);
	//operator =
	void operator=(Bluza b);
	//getteri	
	bool getSclipici();
	//setteri
	void setSclipici(bool sclipici);

	virtual string Afisare();
	virtual void updateTot();
	//destructor
	~Bluza();
};