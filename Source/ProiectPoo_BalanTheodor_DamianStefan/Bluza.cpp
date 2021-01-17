#include <iostream>
#include "Bluza.h"
using namespace std;
//constr
Bluza::Bluza() : HaineFemei::HaineFemei() {
	this->sclipici = false;
}
Bluza::Bluza(int id, string descriere, float pret, string firma, bool inStoc, Marime marime, string culoare, string material, int nasturi, bool sclipici) : HaineFemei::HaineFemei(id, descriere, pret, firma, inStoc, marime, culoare, material, nasturi) {
		this->sclipici = sclipici;
}
//constr copiere
Bluza::Bluza(Bluza& b) : HaineFemei::HaineFemei(b) {
	this->sclipici = b.sclipici;
}
//op=
void Bluza::operator=(Bluza b) {
	this->HaineFemei::operator=(b);
	this->sclipici = b.sclipici;
}

//getteri
bool Bluza::getSclipici() {
	return this->sclipici;
}

//setteri
void Bluza::setSclipici(bool sclipici) {
	this->sclipici = sclipici;
}
 

void Bluza::updateTot() {
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
	cout << endl << "Noua culoare(string): ";
	cin >> s;
	setCuloare(s);
	cout << endl << "Noul material(string): ";
	cin >> s;
	setMaterial(s);
	cout << endl << "Noul nr de nasturi(int): ";
	cin >> i;
	setNasturi(i);
}
string Bluza::Afisare() {
	return "id: " + this->getId() + this->getDescriere() + "\nPret: " + to_string(this->getPret()) + "\nFirma: " + this->getFirma() + "\nculoare: " + this->getCuloare() + "\nmaterial: " + this->getMaterial() + "\nnr nasturi: " + to_string(this->getNasturi()) + "\nare sclipici: " + (this->getSclipici() ? "Da" : "Nu");
}

Bluza::~Bluza() {

}