//
// Created by PC on 12/10/2025.
//

#ifndef ZASTITAKODASAPONAVLJANJEM_H
#define ZASTITAKODASAPONAVLJANJEM_H
#include <cstdlib>

class TelekomunikacioniUredjaj {
public:
    TelekomunikacioniUredjaj(int N) : duzina_sekvence_N(N) {}
protected:
    int izvor_generator(); // je generator slucajnih brojeva koji vraca brojeve 0 ili 1

    int * izvor ();//  je metoda koja uzima i stvara dinamicki alociran niz od N clanova i ciji su clanovi brojei 0 i 1 izvor_generatora. Povratna vrednost je pokazivac na niz

    virtual int* koder () = 0; // koder koji cemo redefinisati u podklasi

    virtual void kanal () = 0; // kanal koji cemo redefinisati u podklasi

    virtual int* dekoder() = 0;// dekoder koji cemo redefinisati u podklasi i koji je zapravo ono sto prijemnik vidi

    int duzina_sekvence_N; // ovde se cuva duzina inicijalizovanog niza da bi bio pristupan podklasama
};



#endif //ZASTITAKODASAPONAVLJANJEM_H
