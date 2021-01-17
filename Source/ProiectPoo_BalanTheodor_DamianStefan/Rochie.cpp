#include <iostream>
#include "Rochie.h"
using namespace std;
//constr
Rochie::Rochie() : HaineFemei::HaineFemei(){
	this->lungime = 0;
	this->bretele = false;
}
Rochie::Rochie(int id, string descriere, float pret, string firma, bool inStoc, Marime marime, string culoare, string material, int nasturi, int lungime, bool bretele) : HaineFemei::HaineFemei(id, descriere, pret, firma, inStoc, marime, culoare, material, nasturi) {
	if (lungime == 0) {
		throw new exception("Lungime invalida");
	}
	else {
		this->lungime = lungime;
		this->bretele = bretele;
	}
}
//constr copiere
Rochie::Rochie(Rochie& r) : HaineFemei::HaineFemei(r) {
	this->lungime = r.lungime;
	this->bretele = r.bretele;
}
//op=
void Rochie::operator=(Rochie r) {
	this->HaineFemei::operator=(r);
	this->lungime = r.lungime;
	this->bretele = r.bretele;
}

//getteri
int Rochie::getLungime() {
	return this->lungime;
}
bool Rochie::getBretele() {
	return this->bretele;
}

//setteri
void Rochie::setBretele(bool bretele) {
	this->bretele = bretele;
}
void Rochie::setLungime(int lungime) {
	if (lungime) {
		this->lungime = lungime;
	}
	else {
		cout << endl << "lungime prea mica" << endl;
	}
}

void Rochie::updateTot() {
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
	cout << endl << "Noua lungime: ";
	cin >> i;
	setLungime(i);
}
/*
string Rochie::Afisare() {
	return "id: " + this->getId() + "Descriere: " + this->getDescriere();
}*/

Rochie::~Rochie() {

}