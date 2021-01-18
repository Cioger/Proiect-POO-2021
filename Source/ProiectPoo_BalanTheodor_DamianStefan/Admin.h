#pragma once
#include <iostream>
#include <string>
#include "User.h"
#include <vector>

using namespace std;

class Admin: public User {
protected:
	float plata;
	string rol;
	
public:
	//constructori
	Admin();
	Admin(string nume, string prenume, string mail, string adresa, vector<Haine*> cart, float plata, string rol);
	Admin(Admin& a);
	//getteri
	float getPlata();
	string getRol();
	//setteri si splash
	void splash();
	void setPlata(float plata);
	void setRol(string rol);
	//operatori
	void operator=(Admin a);
	Admin operator+=(int bt);
	Admin operator-=(int ds);
	Admin operator*(int btds);
	//destructor
	~Admin();
};