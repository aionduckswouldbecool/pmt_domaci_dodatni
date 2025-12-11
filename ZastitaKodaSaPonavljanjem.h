
//
// Created by PC on 12/10/2025.
//
#pragma once

#ifndef ZASTITAKODASAPONAVLJANJEM_H
#include "TelekomunikacioniUredjaj.h"
#define ZASTITAKODASAPONAVLJANJEM_H
class ZastitaKodaSaPonavljanjem : public TelekomunikacioniUredjaj { // nasledjuje telekomunikacioniUredjaj
public:
    ZastitaKodaSaPonavljanjem(int N, int n, int p); // nasledjuje konstruktor telekomunikacionog uredjaj
protected: // ako hocu podrazumevane vrednosti onda moram u ovaj konsturktor stavim cemu su jednake N,n,p
    virtual int* koder (int * niz) override; // on treba da uzme niz od
    virtual void kanal (int * niz) override;
    virtual int* dekoder(int * niz) override;
    // sutra odradi fje ovih override-ovanih metoda
private:
    int broj_ponavljanja_n; // broj ponavljanja kodera sa zastitom sa ponavljanje
    double verovatnoca_greske_kanala_p;
};



#endif //ZASTITAKODASAPONAVLJANJEM_H
