#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "User.h"
#include "Admin.h"
#include "Haine.h"
#include "HaineFemei.h"
#include "HaineBarbati.h"
#include "Bermude.h"
#include "Ghiozdan.h"
#include "Bluza.h"
#include "Rochie.h"
#include "Controller.h"
#include "View.h"


using namespace std;


int main() {
	try {
		Bluza bluza(1111,"Bluza cu maneci 3 sferturi",50,"Burrberry",true,Marime::S,"gri","catifea",2,true);
		Rochie rochie(1122,"Rochie fara maneci", 100,"H&M",true,Marime::XS,"rosie","lana",5,12,false);
		Bermude bermude(2211,"Pantaloni cargo",20,"Lidl",true,Marime::L,4,false,"India",5,true);
		Ghiozdan ghiozdan(2222,"Ranita 20L",150,"US Army",true,Marime::XL,5,true,"USA",4,true);
		
		int i;
		View view;
		Controller controller;

		vector<Haine*> haineStoc;


		haineStoc.push_back(&bluza);
		haineStoc.push_back(&rochie);
		haineStoc.push_back(&bermude);
		haineStoc.push_back(&ghiozdan);
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl << "                         BTH & DST" << endl;
		cout << "                ---magazin online de fite---" << endl;
		cout << "                      (second hand)" << endl;
		cout << endl;
		cout << endl;
		view.logare();
		i = controller.alegere(1, 2);
		system("CLS");
		if (i == 1) {
			cout << endl << "Ati ales sa va autentificati drept administrator." << endl;
			cout << "Va rugam sa introduceti datele dvs:" << endl;
			Admin admin;

			cout << "Nume: ";
			admin.setNume(controller.introducereDate());
			cout << "\nPrenume: ";
			admin.setPrenume(controller.introducereDate());
			cout << "\nMail: ";
			admin.setMail(controller.introducereDate());
			//cout << "\nAdresa: ";
			//admin.setadresa(controller.introduceredate());
			cout << "\nPost: ";
			admin.setRol(controller.introducereDate());
			admin.setPlata(5000); //comunism platim pe toti la fel
			admin.splash();

			while (i != 0) {
				view.meniu(1);
				i = controller.alegere(0, 6);
				system("CLS");
				if (i == 1) {
					view.toateHainele(haineStoc);
				}
				else if (i == 2) {
					view.haineDeAdaugat();
					i = controller.alegere(1, 4);
					if (i == 1) {
						controller.adaugareHaineInStoc(haineStoc, &bluza);
					}
					else if (i == 2) {
						controller.adaugareHaineInStoc(haineStoc, &rochie);
					}
					else if (i == 3) {
						controller.adaugareHaineInStoc(haineStoc, &bermude);
					}
					else if (i == 4) {
						controller.adaugareHaineInStoc(haineStoc, &ghiozdan);
					}
				}
				else if (i == 3) {
					view.toateHainele(haineStoc);
					cout << endl;
					cout << "Alegeti haina pentru stergere: ";
					cout << endl;
					if (haineStoc.size()) {
						i = controller.alegere(1, haineStoc.size());
						controller.eliminareHaineInStoc(haineStoc, i);
					}
				}
				else if (i == 4) {
					view.toateHainele(haineStoc);
					cout << endl;
					cout << "Alegeti haina pentru editare: ";
					cout << endl;
					i = controller.alegere(1, haineStoc.size());
					controller.editareHaineStoc(haineStoc, i);
				}
				else if (i == 5) {
					view.toateHainele(haineStoc);
					cout << endl;
					cout << "Alegeti haina pentru discount: ";
					cout << endl;
					i = controller.alegere(1, haineStoc.size());
					controller.discount(haineStoc, i);
				}
				else if (i == 6) {
					view.toateHainele(haineStoc);
					cout << endl;
					cout << "Alegeti haina pentru scumpire: ";
					cout << endl;
					i = controller.alegere(1, haineStoc.size());
					controller.scumpire(haineStoc, i);
				}
			}
		}
		else {
			cout << endl << "Ati ales sa va autentificati drept utilizator. "<< endl;
			cout << "Bine ati venit in Toni Dealdeget! Va rugam sa completati datele:" << endl;
			User user;
			cout << "Nume: ";
			user.setNume(controller.introducereDate());
			cout << "\nPrenume: ";
			user.setPrenume(controller.introducereDate());
			cout << "\nMail: ";
			user.setMail(controller.introducereDate());
			cout << "\nAdresa: ";
			user.setAdresa(controller.introducereDate());
			user.splash();

			while (i != 0) {
				view.meniu(2);
				i = controller.alegere(0, 5);
				system("CLS");
				if (i == 1) {
					view.toateHainele(haineStoc);
				}
				else if (i == 2) {
					if (haineStoc.size()) {
						view.toateHainele(haineStoc);
						cout << "\nIntroduceti id-ul hainei din stoc: ";
						i = controller.alegere(1, haineStoc.size());
						user.addCart(haineStoc[i - 1]);
						haineStoc[i - 1] = haineStoc.back();
						haineStoc.pop_back();
					}
					else {
						cout << "\nNu sunt produse disponibile in magazin.\n";
					}

				}
				else if (i == 3) {
					user.afisareCart();
				}
				else if (i == 4) {
					user.afisareCart();
					if (user.getNrProduseDinCos()) {
					cout << "\nCe produs doriti sa stergeti? ";
					i = controller.alegere(1, user.getNrProduseDinCos());
					user.deleteFromCart(haineStoc, i);
					}
				}
				else if (i == 5) {
					if (user.getNrProduseDinCos()) {
						user.scoateBon();
						//creeaza fisierul *nume*bon.txt
						//acesta actioneaza drept trimiterea comenzii si datelor userului
						//si reprezinta si raportul din fisier text despre comanda
					}
					else {
						cout << "Nu aveti produse in cos!\n";
					}
				}
			}
		}

	}
	catch (exception* e) {
		cout << e->what() << endl;
	}
}