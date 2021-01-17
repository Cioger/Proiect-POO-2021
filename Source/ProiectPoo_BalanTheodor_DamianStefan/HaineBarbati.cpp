#include "HaineBarbati.h"
#include <iostream>
#include <string>

using namespace std;
//constructor default
HaineBarbati::HaineBarbati() : Haine::Haine()
{
    this->NrBuzunare = 0;
    this->Imprimeu = false;
    this->TaraFabricatie = "";
}
//constructor parametri
HaineBarbati::HaineBarbati(int id, string descriere, float pret, string firma, bool inStoc, Marime marime, int NrBuzunare, bool Imprimeu, string TaraFabricatie): Haine::Haine(id, descriere, pret, firma, inStoc, marime)
{
    if (NrBuzunare == 0) {
        throw new exception("Nu are buzunare");
    }
    else if (TaraFabricatie == "") {
        throw new exception("Nu a fost adaugata tara fabricatiei");
    }
    else
    {
        this->NrBuzunare = NrBuzunare;
        this->TaraFabricatie = TaraFabricatie;
        this->Imprimeu = Imprimeu;
    }
}
//cosntructor copiere
HaineBarbati::HaineBarbati(HaineBarbati& h) : Haine::Haine(h)
{
    this->NrBuzunare = h.NrBuzunare;
    this->Imprimeu = h.Imprimeu;
    this->TaraFabricatie = h.TaraFabricatie;
}
//op=
void HaineBarbati::operator=(HaineBarbati h)
{
    this->Haine::operator=(h);
    this->NrBuzunare = h.NrBuzunare;
    this->TaraFabricatie = h.TaraFabricatie;
    this->Imprimeu = h.Imprimeu;
}

//getteri
int HaineBarbati::getNrBuzunare()
{
    return this->NrBuzunare;

}

bool HaineBarbati::getImprimeu()
{
    return this->Imprimeu;
}

string HaineBarbati::getTaraFabricatie()
{
    return this->TaraFabricatie;

}

//setteri
void HaineBarbati::setNrBuzunare(int NrBuzunare)
{
    if (NrBuzunare != 0)
        this->NrBuzunare = NrBuzunare;

}

void HaineBarbati::setImprimeu(bool Imprimeu)
{
    this->Imprimeu = Imprimeu;
}

void HaineBarbati::setTaraFabricatie(string TaraFabricatie)
{
    if (TaraFabricatie != "")
        this->TaraFabricatie = TaraFabricatie;
}

string HaineBarbati::Afisare()
{
    return "\nHaineBarbati\n";
}
//destructor
HaineBarbati::~HaineBarbati()
{

}