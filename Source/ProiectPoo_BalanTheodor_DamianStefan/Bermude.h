#pragma once
#include "HaineBarbati.h"

using namespace std;

class Bermude : public HaineBarbati {
protected:
	int nrFermoare;
	bool curea;
public:
	//constructori
	Bermude();
	Bermude(int id, string descriere, float pret, string firma, bool inStoc, Marime marime, int NrBuzunare, bool Imprimeu, string TaraFabricatie, int nrFermuare, bool curea);
	Bermude(Bermude& b);
	//operator =
	void operator=(Bermude b);
	//getteri
	int getNrFermuare();
	bool getCurea();
	//setteri
	void setNrFermuare(int nrFermuare);
	void setCurea(bool curea);

	virtual string Afisare();
	virtual void updateTot();
	//destructor
	~Bermude();
};