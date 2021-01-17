#pragma once
#include <vector>
#include "Haine.h"

using namespace std;

class View {
public:
	void logare();
	void meniu(int user);
	void haineDeAdaugat();
	void toateHainele(vector<Haine*> haine);
	//toate tzoalele, toate arfele
	void adaugaHaineInCos();
};
