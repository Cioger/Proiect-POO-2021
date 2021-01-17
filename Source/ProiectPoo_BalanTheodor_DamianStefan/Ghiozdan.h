#pragma once
#include "HaineBarbati.h"

using namespace std;

class Ghiozdan : public HaineBarbati {
protected:
	int nrManere;
	bool suportApa;
public:
	//constructori
	Ghiozdan();
	Ghiozdan(int id, string descriere, float pret, string firma, bool inStoc, Marime marime, int NrBuzunare, bool Imprimeu, string TaraFabricatie, int nrManere, bool suportApa);
	Ghiozdan(Ghiozdan& g);
	//operator =
	void operator=(Ghiozdan g);
	//getteri
	int getNrManere();
	bool getSuportApa();
	//setteri
	void setNrManere(int nrManere);
	void setSuportApa(bool suportApa);

	virtual string Afisare();
	virtual void updateTot();
	//destructor
	~Ghiozdan();
};