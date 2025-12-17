//
// Created by PC on 12/10/2025.
//
#pragma once
#ifndef TELEKOMUNIKACIONI_UREDJAJ_H
#define TELEKOMUNIKACIONI_UREDJAJ_H
class TelekomunikacioniUredjaj {
public:

    TelekomunikacioniUredjaj(int N) : duzina_sekvence_N(N) {}

    virtual int izvor_generator(); // je generator slucajnih brojeva koji vraca brojeve 0 ili 1

    virtual int * izvor ();//  je metoda koja uzima i stvara dinamicki alociran niz od N clanova i ciji su clanovi brojei 0 i 1 izvor_generatora. Povratna vrednost je pokazivac na niz

    virtual int* koder (int * niz) = 0; // koder koji cemo redefinisati u podklasi

    virtual void kanal (int * niz) = 0; // kanal koji cemo redefinisati u podklasi

    virtual int* dekoder(int * niz) = 0;// dekoder koji cemo redefinisati u podklasi i koji je zapravo ono sto prijemnik vidi

    virtual void printNiz(int * niz); // funkcija koja printuje niz



protected:

    int duzina_sekvence_N; // ovde se cuva duzina inicijalizovanog niza da bi bio pristupan podklasama

};



#endif // TELEKOMUNIKACIONI_UREDJAJ_H  cim klasa ima cisto jednu = 0 fju ona je apstraktna i od nje ne mozes da napravim objekt klase od nje
