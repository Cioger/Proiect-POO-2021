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
	cout << endl << "Noua culoare: ";
	cin >> s;
	setCuloare(s);
	cout << endl << "Noul material: ";
	cin >> s;
	setMaterial(s);
	cout << endl << "Noul nr de nasturi: ";
	cin >> i;
	setNasturi(i);
}
/*
string Rochie::Afisare() {
	return "id: " + this->getId() + "Descriere: " + this->getDescriere();
}*/

Bluza::~Bluza() {

}