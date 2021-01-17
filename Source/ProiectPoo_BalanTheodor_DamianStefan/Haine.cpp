#include "Haine.h"
#include <iostream>
#include <string>
using namespace std;

//constructor default
Haine::Haine() {
	this->id = 0;
	this->descriere = "Descriere indisponibila.";
	this->pret = 0;
	this->firma = "Firma";
	this->inStoc = false;
};

//constructor cu parametri
Haine::Haine(int id, string descriere, float pret, string firma, bool inStoc, Marime marime) {
	if (id == 0) {
		throw new exception("id incomplet");
	}
	else if (this->descriere == "") {
		throw new exception("descriere incompleta");
	}
	else if (this->pret==0) {
		throw new exception("pret indisponibil");
	}
	else if (this->firma=="") {
		throw new exception("firma indisponibil");
	}
	else {
		this->id = id;
		this->descriere = descriere;
		this->pret = pret;
		this->firma = firma;
		this->inStoc = inStoc;
		this->marime = marime;
	}
};

//constructor de copiere
Haine::Haine(const Haine& h) {
		this->id = h.id;
		this->descriere = h.descriere;
		this->pret = h.pret;
		this->firma = h.firma;
		this->inStoc = h.inStoc;
		this->marime = h.marime;
}

//operator =
void Haine::operator=(Haine h) {
	this->id = h.id;
	this->descriere = h.descriere;
	this->pret = h.pret;
	this->firma = h.firma;
	this->inStoc = h.inStoc;
	this->marime = h.marime;
}

//getteri
int Haine::getId() {
	return this->id;
}

string Haine::getDescriere() {
	return this->descriere;
}

float Haine::getPret() {
	return this->pret;
}

string Haine::getFirma() {
	return this->firma;
}

bool Haine::getStoc() {
	return this->inStoc;
}
Marime Haine::getMarime() {
	return this->marime;
}


//setteri
void Haine::setId(int id) {
	if (id != 0) {
		this->id = id;
	}
}

void Haine::setDescriere(string descriere) {
	if (descriere != " ") {
		this->descriere = descriere;
	}
}
void Haine::setPret(float pret) {
	if (pret >= 0) {
		this->pret = pret;
	}
}

void Haine::setFirma(string firma) {
	this->firma = firma;
}

void Haine::setStoc(bool inStoc) {
	this->inStoc = inStoc;
}

void Haine::setMarime(Marime marime) {
	this->marime=marime;
}

//operator +=
/*Produs Produs::operator+=(int x) {
	pret += x;
	return *this;
}
*/

string Haine::Afisare() {
	return "Haine\n";
}

void Haine::updateTot() {

}

/*
Produs Produs::operator-=(int x) {
	return *this;
}
*/

//destructor
Haine::~Haine()
{

};