#include <iostream>
#include <fstream>
#include <string>
#include "Haine.h"
#include "User.h"
#include <vector>
#include "Controller.h"
using namespace std;

int Controller::alegere(int bt, int ds) {
	bool bun = false;
	int i;
	do {
		if (bun)cout << endl << "!!!ACTIUNE INVALIDA!!!" << endl;
		//nu mai urla
		cout << endl << "Alegere: ";
		cin >> i;
		bun = true;
	} while (i<bt || i>ds);
	//alegerea corecta
	return i;
}

string Controller::introducereDate() {
	string s;
	cin >> s;
	return s;
}
void Controller::adaugareHaineInStoc(vector<Haine*>& haineStoc, Haine* const& haine) {
	haine->updateTot();
	haineStoc.push_back(haine);
	}
void Controller::eliminareHaineInStoc(vector<Haine*>& haineStoc, int i) {
	haineStoc[i - 1] = haineStoc.back();
	haineStoc.pop_back();
	}
void Controller::editareHaineStoc(vector<Haine*>& haineStoc, int i) {
	haineStoc[i - 1]->updateTot();
	}
void Controller::discount(vector<Haine*>& haineStoc, int i) {
	float x,y;
	cout << endl << "Alegeti Valoarea de scadere a pretului: ";
	cin >> x;
	y = haineStoc[i - 1]->getPret();
	y = y - x;
	
	haineStoc[i - 1]->setPret(y);
	//fmm de stl mi-ai mancat viata
}
void Controller::scumpire(vector<Haine*>& haineStoc, int i) {
	float x, y;
	cout << endl << "Alegeti Valoarea de crestere a pretului: ";
	//of inflatia :(
	cin >> x;
	y = haineStoc[i - 1]->getPret();
	y = x + y;
	haineStoc[i - 1]->setPret(y);
}

