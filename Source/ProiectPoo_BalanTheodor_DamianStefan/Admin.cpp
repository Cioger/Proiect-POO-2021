#include <iostream>
#include <string>
#include "Admin.h"
#include <vector>

using namespace std;

	//constructori
Admin::Admin(): User::User() {
	this->plata = 0;
	this->rol = "";
}
Admin::Admin(string nume, string prenume, string mail, string adresa, vector<Haine*> cart, float plata, string rol) :User::User(nume, prenume, mail, adresa, cart) {
	if (plata == 0) {
		throw new exception("plata invalida");
		//scartarule
	}
	else if (rol == "") {
		throw new exception("rol invalid");
	}
	else {
		this->plata = plata;
		this->rol = rol;
	}
}

Admin::Admin(Admin& a) :User::User(a) {
	this->plata = a.plata;
	this->rol = a.rol;
}
	//getteri
float Admin::getPlata() {
	return this->plata;
	}
string Admin::getRol() {
	return this->rol;
	}
	//setteri si splash
void Admin::splash() {
	cout << endl << "Welcome admin " << this->getNume()<<endl;
	}
void Admin::setPlata(float plata) {
	if (plata == 0) {
		cout << "marca banu" << endl;
	}
	else this->plata = plata;
	}
void Admin::setRol(string rol) {
	if (rol == "")cout << "rol invalid";
	else this->rol = rol;
	}
	//operatori
void Admin::operator=(Admin a) {
	this->User::operator=(a);
	this->plata = a.plata;
	this->rol = a.rol;
	}
Admin Admin::operator+=(int bt) {
	plata += bt;
	return *this;
}
Admin Admin::operator-=(int ds) {
	plata -= ds;
	return *this;
}

	////destructor
Admin::~Admin() {

	}
