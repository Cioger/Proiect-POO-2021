#pragma once
#include <iostream>
#include <string>

using namespace std;

enum class Marime {
	XS, S, M, L, XL
};

class Haine {
protected:

	int id;
	string descriere;
	float pret;
	string firma;
	bool inStoc;
	Marime marime;

public:
	Haine();
	Haine(int id, string descriere, float pret, string firma, bool inStoc, Marime marime);
	Haine(const Haine& p);

	int getId();
	string getDescriere();
	float getPret();
	string getFirma();
	bool getStoc();
	Marime getMarime();
	
	void setId(int id);
	void setDescriere(string descriere);
	void setPret(float pret);
	void setFirma(string firma);
	void setStoc(bool inStoc);
	void setMarime(Marime marime);
	virtual void updateTot();
	virtual string Afisare();
	
	//operatori
	void operator=(Haine p);
	Haine operator+=(int bt);
	virtual Haine operator-=(int ds);

	~Haine();
};

