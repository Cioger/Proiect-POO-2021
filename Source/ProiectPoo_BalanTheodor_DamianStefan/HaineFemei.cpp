#include "HaineFemei.h"
#include <iostream>
#include <string>
using namespace std;
//constr default
HaineFemei::HaineFemei() : Haine::Haine() {
	this->culoare = "";
	this->material = "";
	this->nasturi = 0;
}
//constr parametri
HaineFemei::HaineFemei(int id, string descriere, float pret, string firma, bool inStoc, Marime marime, string culoare, string material, int nasturi) : Haine::Haine(id, descriere, pret, firma, inStoc, marime) {
	if (culoare == "") {
		throw new exception("Nu a fost aleasa culoarea");
	}
	else if (material == "") {
		throw new exception("Nu a fost ales materialul");
	}
	else if (nasturi == 0) {
		throw new exception("Nu sunt destui nasturi");
	}
	else {
		this->culoare = culoare;
		this->material = material;
		this->nasturi = nasturi;
	}
}
//constr copiere
HaineFemei::HaineFemei(HaineFemei& h) : Haine::Haine(h) {
	this->culoare = h.culoare;
	this->material = h.material;
	this->nasturi = h.nasturi;
}
//op =
void HaineFemei::operator=(HaineFemei h) {
	this->Haine::operator=(h);
	this->culoare = h.culoare;
	this->material = h.material;
	this->nasturi = h.nasturi;
}
//getteri
string HaineFemei::getCuloare() {
	return this->culoare;
}

string HaineFemei::getMaterial() {
	return this->material;
}

int HaineFemei::getNasturi() {
	return this->nasturi;
}
//setteri
void HaineFemei::setCuloare(string culoare) {
	if (culoare != "") {
		this->culoare = culoare;
	}
}

void HaineFemei::setMaterial(string material) {
	if (material != "") {
		this->material = material;
	}
}

void HaineFemei::setNasturi(int nasturi) {
	if (nasturi != 0) {
		this->nasturi = nasturi;
	}
}

string HaineFemei::Afisare() {
	return "HaineFemei\n";
}
//destr
HaineFemei::~HaineFemei() {

}