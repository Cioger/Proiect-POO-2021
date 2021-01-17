#pragma once
#include "Haine.h"
#include "User.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

class Controller {
public:
	int alegere(int bt, int ds);
	string introducereDate();
	//void saveProduct(Haine* haine);
	//void getProducts();
	//void deleteAllProducts();
	////void addProduct(string product);
	//void addProduct(Haine* haine);
	//void readProduct();
	void adaugareHaineInStoc(vector<Haine*>& haineStoc, Haine* const& haine);
	void eliminareHaineInStoc(vector<Haine*>& haineStoc, int i);
	void editareHaineStoc(vector<Haine*>& haineStoc, int i);
	//void sendOrder(User u);
	//void viewOrders(bool print);
	//void printOrders(string s);
};