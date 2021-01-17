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
	//fara spatii
	cout << endl << "Noul id(int): ";
	cin >> i;
	setId(i);
	cout << endl << "Noua descriere(string): ";
	cin >> s;
	setDescriere(s);
	cout << endl << "Noul pret(float):";
	cin >> f;
	setPret(f);
	cout << endl << "Noua firma(string): ";
	cin >> s;
	setFirma(s);
	cout << endl << "Noul nr de buzunare(int): ";
	cin >> i;
	setNrBuzunare(i);
	cout << endl << "Noua tara de fab(string): ";
	cin >> s;
	setTaraFabricatie(s);
	cout << endl << "Noul nr de manere(int): ";
	cin >> i;
	setNrManere(i);
}
string Ghiozdan::Afisare() {
	return "id: " + this->getId() + this->getDescriere() + "\nPret: " + to_string(this->getPret()) + "\nFirma: " + this->getFirma() + "\nnr Buzunare: " + to_string(this->getNrBuzunare()) + "\nare imprimeu: " + (this->getImprimeu() ? "Da" : "Nu") + "\nTara Fabricatie: " + this->getTaraFabricatie() + "\nnr Manere: " + to_string(this->getNrManere()) + "\nare suport de apa: " + (this->getSuportApa() ? "Da" : "Nu");
}
//destructor
Ghiozdan::~Ghiozdan() {

}