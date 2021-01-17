#include <iostream>
#include "Ghiozdan.h"

using namespace std;

Ghiozdan::Ghiozdan() :HaineBarbati::HaineBarbati() {
	this->nrManere = 0;
	this->suportApa = false;
}
Ghiozdan::Ghiozdan(int id, string descriere, float pret, string firma, bool inStoc, Marime marime, int NrBuzunare, bool Imprimeu, string TaraFabricatie, int nrManere, bool suportApa) : HaineBarbati::HaineBarbati(id, descriere, pret, firma, inStoc, marime, NrBuzunare, Imprimeu, TaraFabricatie) {
	if (nrManere == 0) {
		throw new exception("nu sunt suficiente manere");
	}
	else {
		this->nrManere = nrManere;
		this->suportApa = suportApa;
	}
}
Ghiozdan::Ghiozdan(Ghiozdan& g) :HaineBarbati::HaineBarbati(g) {
	this->nrManere = g.nrManere;
	this->suportApa = g.suportApa;
}
//operator =
void Ghiozdan::operator=(Ghiozdan g) {
	this->HaineBarbati::operator=(g);
	this->nrManere = g.nrManere;
	this->suportApa = g.suportApa;
}
//getteri
int Ghiozdan::getNrManere() {
	return this->nrManere;
}
bool Ghiozdan::getSuportApa() {
	return this->suportApa;
}
//setteri
void Ghiozdan::setNrManere(int nrManere) {
	if (nrManere != 0) {
		this->nrManere = nrManere;
	}
	else cout << endl << "prea putine manere" << endl;
}
void Ghiozdan::setSuportApa(bool suportApa) {
	this->suportApa = suportApa;
}

void Ghiozdan::updateTot() {
	int i;
	string s;
	float f;

	cout << endl << "Noul id: ";
	cin >> i;
	setId(i);
	cout << endl << "Noua descriere: ";
	cin >> s;
	setDescriere(s);
	cout << endl << "Noul pret:";
	cin >> f;
	setPret(f);
	cout << endl << "Noua firma: ";
	cin >> s;
	setFirma(s);
	cout << endl << "Noul nr de buzunare: ";
	cin >> i;
	setNrBuzunare(i);
	cout << endl << "Noua tara de fab: ";
	cin >> s;
	setTaraFabricatie(s);
	cout << endl << "Noul nr de manere: ";
	cin >> i;
	setNrManere(i);
}
//string Afisare();
//destructor
Ghiozdan::~Ghiozdan() {

}