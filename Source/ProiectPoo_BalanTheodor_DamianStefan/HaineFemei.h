#pragma once
#include <iostream>
#include <string>
#include "Haine.h"

using namespace std;

class HaineFemei : public Haine {
protected:
	string culoare;
	string material;
	int nasturi;
public:
	HaineFemei();
	HaineFemei(int id, string descriere, float pret, string firma, bool inStoc, Marime marime, string culoare, string material, int nasturi);
	HaineFemei(HaineFemei& h);
	void operator=(HaineFemei h);

	string getCuloare();
	string getMaterial();
	int getNasturi();

	void setCuloare(string culoare);
	void setMaterial(string material);
	void setNasturi(int nasturi);
	virtual string Afisare();

	~HaineFemei();
};