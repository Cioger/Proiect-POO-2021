#include "View.h"
#include <iostream>

using namespace std;

void View::logare() {
	cout << "-------Autentificare-------" << endl;
	cout << "Optiuni de autentificare:\n";
	cout << "  1) Administrator\n";
	cout << "  2) User\n";
	cout << "---------------------------"<<endl;
}

void View::meniu(int user) {
	if (user == 1) {
		cout << "\nPanou de comanda (admin)\n";
		cout << "0) Exit\n";
		cout << "1) Afiseaza haine\n";
		cout << "2) Adauga haine in stoc\n";
		cout << "3) Sterge haine din stoc\n";
		cout << "4) Editeaza haine din stoc\n";
		cout << "5) Aplica Reducere \n";
		cout << "6) Aplica Scumpire \n";
	}
	else {
		cout << "\nActiuni disponibile:\n";
		cout << "0) Exit\n";
		cout << "1) Afiseaza hainele\n";
		cout << "2) Adauga haine in cart\n";
		cout << "3) Afiseaza hainele din cart\n";
		cout << "4) Sterge haine din cart\n";
		cout << "5) Efectueaza comanda\n";
	}
}
//html+css+js sunt de domeniul trecutului
//nu te numesti programator daca nu faci front-end in c++

void View::haineDeAdaugat() {
	cout << endl << "Alege tipul de haina de adaugat:\n";
	cout << "1. Bluza\n";
	cout << "2. Rochie\n";
	cout << "3. Bermude\n";
	cout << "4. Ghiozdan\n";
	//mare diversitate de haine la noi in magazin
}

void View::toateHainele(vector<Haine*> haine) {
	//functia jador
	int c = 1;
	vector<Haine*>::iterator i;
	cout << "\nAfisare haine din stoc." << endl;

	if (haine.size()) {
		for (i = haine.begin(); i != haine.end(); i++) {
			cout<<endl<<"#"<< c <<" "<< (*i)->Afisare() << endl;
			c++;
		}
	}
	else {
		cout << "\nNu sunt haine in stoc\n";
	}
}
