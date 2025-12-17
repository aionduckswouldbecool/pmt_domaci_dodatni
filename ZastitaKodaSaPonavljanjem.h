
//
// Created by PC on 12/10/2025.
//
#pragma once
#include "TelekomunikacioniUredjaj.h"
#ifndef ZASTITAKODASAPONAVLJANJEM_H
#define ZASTITAKODASAPONAVLJANJEM_H
class ZastitaKodaSaPonavljanjem : public TelekomunikacioniUredjaj { // nasledjuje telekomunikacioniUredjaj
public:

    ZastitaKodaSaPonavljanjem(int N, int n, double p); // nasledjuje konstruktor telekomunikacionog uredjaj

    // ako hocu podrazumevane vrednosti onda moram u ovaj konsturktor stavim cemu su jednake N,n,p

    int* koder (int * niz) override; // on treba da uzme originalni niz i da svaki clan ponovi n puta

    int* kanal (int * ulazni_niz, int* greska_niz) override; // konacna definicija metode

    int * greska_kanala_niz(); //vraca u odnosu na koji realizujemo gresku kanala

    int greska_generator(); // vraca 0 ili 1 u ondnosu na p

    virtual int* dekoder(int * niz) override; // on uzima niz iz kanala vraca u oblik duzine N preko majority rule-a

    // sutra odradi fje ovih override-ovanih metoda

protected:

    int broj_ponavljanja_n; // broj ponavljanja kodera sa zastitom sa ponavljanjem
    double verovatnoca_greske_kanala_p;

};



#endif //ZASTITAKODASAPONAVLJANJEM_H
