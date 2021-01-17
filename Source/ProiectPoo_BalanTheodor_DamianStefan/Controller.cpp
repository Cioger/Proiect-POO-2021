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
//	void saveProduct(Haine* haine);
//	void getProducts();
//	void deleteAllProducts();
//	//void addProduct(string product);
//	void addProduct(Haine* haine);
//	void readProduct();
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
//	void sendOrder(User u);
//	void viewOrders(bool print);
//	void printOrders(string s);
