#pragma once
#include <iostream>
#include <string>
#include "Haine.h"
#include <vector>

using namespace std;

class User {
protected:
	string nume;
	string prenume;
	string mail;
	string adresa;
	vector<Haine *> cart;
public:
	//constructori
	User();
	User(string nume, string prenume, string mail, string adresa, vector<Haine*> cart);
	User(User& u);
	//getteri
	string getNume();
	string getPrenume();
	string getMail();
	string getAdresa();
	int getNrProduseDinCos();
	
	//setteri si alte functii
	void splash();
	void setNume(string nume);
	void setPrenume(string Prenume);
	void setMail(string mail);
	void setAdresa(string adresa);
	void addCart(Haine* haine);
	void afisareCart();
	void deleteFromCart(vector<Haine*>& hainetotal, int tb);
	string scoateBon();
	//operatori
	void operator=(User u);
	
	//destructor
	~User();
};

