#pragma once
#include "Haine.h"
#include "User.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;
//scriem clean code facem MVC
class Controller {
public:
	int alegere(int bt, int ds);
	string introducereDate();
	void adaugareHaineInStoc(vector<Haine*>& haineStoc, Haine* const& haine);
	void eliminareHaineInStoc(vector<Haine*>& haineStoc, int i);
	void editareHaineStoc(vector<Haine*>& haineStoc, int i);
	void discount(vector<Haine*>& haineStoc, int i);
	void scumpire(vector<Haine*>& haineStoc, int i);
};