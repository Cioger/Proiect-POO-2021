#include <iostream>
#include <string>
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
	cout << endl << "Noua lungime(int): ";
	cin >> i;
	setLungime(i);
}

string Rochie::Afisare() {
	return "id: " + this->getId() + this->getDescriere() + "\nPret: " + to_string(this->getPret()) + "\nFirma: " + this->getFirma() + "\nculoare: " + this->getCuloare() + "\nmaterial: " + this->getMaterial() + "\nnr nasturi: " + to_string(this->getNasturi()) + "\nlungime: " + to_string(this->getLungime()) + "\nare bretele: " + (this->getBretele() ? "Da" : "Nu");
}


Rochie::~Rochie() {

}