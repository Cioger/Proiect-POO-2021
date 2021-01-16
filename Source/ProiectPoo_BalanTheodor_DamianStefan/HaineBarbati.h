#pragma once
#include <iostream>
#include <string>
#include "Haine.h"

using namespace std;

class HaineBarbati : public Haine
{
protected:
    int NrBuzunare;
    bool Imprimeu;
    string TaraFabricatie;

public:
    HaineBarbati();
    HaineBarbati(int id, string descriere, float pret, string firma, bool inStoc, Marime marime, int NrBuzunare, bool Imprimeu, string TaraFabricatie);
    HaineBarbati(HaineBarbati& h);
    void operator=(HaineBarbati h);

    int getNrBuzunare();
    bool getImprimeu();
    string getTaraFabricatie();

    void setNrBuzunare(int NrBuzunare);
    void setImprimeu(bool Imprimeu);
    void setTaraFabricatie(string TaraFabricatie);

    virtual string Afisare();

    ~HaineBarbati();

};