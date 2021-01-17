#include <iostream>
#include "Bermude.h"

using namespace std;

Bermude::Bermude() :HaineBarbati::HaineBarbati() {
	this->nrFermoare = 0;
	this->curea = false;
}
Bermude::Bermude(int id, string descriere, float pret, string firma, bool inStoc, Marime marime, int NrBuzunare, bool Imprimeu, string TaraFabricatie, int nrFermoare, bool curea):HaineBarbati::HaineBarbati(id,descriere,pret,firma,inStoc,marime,NrBuzunare,Imprimeu,TaraFabricatie) {
	if (nrFermoare == 0) {
		throw new exception("nu sunt suficiente fermoare");
	}
	else {
		this->nrFermoare = nrFermoare;
		this->curea = curea;
	}
}
Bermude::Bermude(Bermude& b) :HaineBarbati::HaineBarbati(b) {
	this->nrFermoare = b.nrFermoare;
	this->curea = b.curea;
}
//operator =
void Bermude::operator=(Bermude b) {
	this->HaineBarbati::operator=(b);
	this->nrFermoare = b.nrFermoare;
	this->curea = b.curea;
}
//getteri
int Bermude::getNrFermuare() {
	return this->nrFermoare;
}
bool Bermude::getCurea() {
	return this->curea;
}
//setteri
void Bermude::setNrFermuare(int nrFermuare) {
	if (nrFermoare != 0) {
		this->nrFermoare = nrFermoare;
	}
	else cout<<endl<< "prea putine fermoare" << endl;
}
void Bermude::setCurea(bool curea) {
	this->curea = curea;
}

void Bermude::updateTot() {
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
	cout << endl << "Noul nr de fermoare(int): ";
	cin >> i;
	setNrFermuare(i);
}
string Bermude::Afisare() {
	return "id: " + this->getId() + this->getDescriere() + "\nPret: " + to_string(this->getPret()) + "\nFirma: " + this->getFirma() + "\nnr Buzunare: " + to_string(this->getNrBuzunare()) + "\nare imprimeu: " + (this->getImprimeu()?"Da":"Nu") + "\nTara Fabricatie: " + this->getTaraFabricatie() + "\nnr Fermoare: " + to_string(this->getNrFermuare()) + "\nare curea: " + (this->getCurea() ? "Da" : "Nu");
}
//destructor
Bermude::~Bermude() {

}