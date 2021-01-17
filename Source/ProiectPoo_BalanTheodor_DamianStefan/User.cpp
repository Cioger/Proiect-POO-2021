#include <iostream>
#include <string>
#include "User.h"
#include <vector>

using namespace std;

	//constructori
User::User() {
	this->nume = "";
	this->prenume = "";
	this->mail = "";
	this->adresa = "";
}
User::User(string nume, string prenume, string mail, string adresa, vector<Haine*> cart) {
	if (nume == "") {
		throw new exception("nume invalid");
	}else if (prenume == "") {
		throw new exception("prenume invalid");
	}
	else if(mail == "") {
		throw new exception("mail invalid");
	}
	else if(adresa == "") {
		throw new exception("adresa invalida");
	}
	else {
		this->nume = nume;
		this->prenume = prenume;
		this->mail = mail;
		this->adresa = adresa;
		this->cart = cart;
	}
}
User::User(User& u) {
	this->nume = u.nume;
	this->prenume = u.prenume;
	this->mail = u.mail;
	this->adresa = u.adresa;
	this->cart.assign(u.cart.begin(), u.cart.end());
}
	//getteri
string User::getNume() {
	return this->nume;
}
string User::getPrenume() {
	return this->prenume;
}
string User::getMail() {
	return this->mail;
}
string User::getAdresa() {
	return this->adresa;
}
int User::getNrProduseDinCos() {
	return cart.size();
}

//setteri si alte nebunii
void User::setNume(string nume) {
	if (nume != " ")this->nume = nume;
	else cout << "nume invalid" << endl;
}
	void User::setPrenume(string Prenume) {
		if (prenume != " ")this->prenume = prenume;
		else cout << "prenume invalid" << endl;
	}
	void User::setMail(string mail) {
		if (mail != " ")this->mail = mail;
		else cout << "mail invalid" << endl;
	}
	void User::setAdresa(string adresa) {
		if (adresa != " ")this->adresa = adresa;
		else cout << "adresa invalida" << endl;
	}
	void User::addCart(Haine* haine) {
		this->cart.push_back(haine);
	}
	void User::afisareCart() {
		vector<Haine*>::iterator i;
		cout << endl<<"Afisare cart:" << endl;
		int c = 1;
		for (i = this->cart.begin(); i != this->cart.end(); i++) {
			cout <<"#"<< c << " " << (*i)->Afisare() << endl;
			c++;
		}
		if (c == 1)cout << "Cartul este gol :(" << endl;
	}
	void User::deleteFromCart(vector<Haine*>& hainetotal, int tb) {
		hainetotal.push_back(this->cart[tb - 1]);
		this->cart[tb - 1] = this->cart.back();
		this->cart.pop_back();
	}
	void User::splash() {
		cout << "\n Welcome " + this->getNume() + " " + this->getPrenume()<< endl;
	}
	//string pregatireComanda();
	//operatori
	void User::operator=(User u) {
		this->nume = u.nume;
		this->prenume = u.prenume;
		this->mail = u.mail;
		this->adresa = u.adresa;
		this->cart.assign(u.cart.begin(), u.cart.end());
	}

	string User::scoateBon() {
		string bon;
		vector<Haine*>::iterator i;
		int c = 1;
		bon = "Cumparator: " + this->getNume() + 
			" " + this->getPrenume() + 
			"\ncu adresa: " + this->getAdresa() +
			"\n Haine cumparate:\n";
		for (i = this->cart.begin(); i != this->cart.end(); i++) {
			bon += "\n";
			bon += (*i)->Afisare();
		}
		return bon;
		//vine ANAFu
	}

	//destructor
	User::~User() {
	
	}
