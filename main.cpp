#include <iostream>

#include "ZastitaKodaSaPonavljanjem.h"
#include "ZastitaKodaSaPonavljanjem.cpp"
#include "TelekomunikacioniUredjaj.h"
#include "TelekomunikacioniUredjaj.cpp"
int main ( ) {
    // N duzina inicijalnog niza, n broj ponavljanja, p neki possibility
    int N = 10001;
    int n = 5;
    double p = 0.01;

    ZastitaKodaSaPonavljanjem * uredjaj = new ZastitaKodaSaPonavljanjem(N,n,p);

    int* izvorni = uredjaj->izvor();
    int koder_duzina = n * N;
    int * koder = uredjaj->koder(izvorni);
    int * greska_kanala_niz = uredjaj->greska_kanala_niz();
    int * niz_posle_kanala = uredjaj->kanal(koder, greska_kanala_niz);
    int * dekodovan_niz_bez_gresaka = uredjaj->dekoder(koder);
    int * dekodovan_niz_sa_greskom_kanala = uredjaj->dekoder(niz_posle_kanala);/*
    std::cout << "Izvor: ";
    uredjaj->printNiz(izvorni, N);
    std::cout << std::endl;
    std::cout << "Koder izvor:       ";
    uredjaj->printNiz(koder, koder_duzina);
    std::cout << std::endl;
    std::cout << "Greska kanala niz: ";
    uredjaj->printNiz(greska_kanala_niz, koder_duzina);
    std::cout << std::endl;
    std::cout<< "Niz posle prolazka u kanalu: ";
    uredjaj->printNiz(niz_posle_kanala, koder_duzina);
    std::cout << std::endl;
    std::cout << "Dekodovan niz da nije bilo gresaka: ";
    uredjaj->printNiz(dekodovan_niz_bez_gresaka, N);
    std::cout << std::endl;
    std::cout << "Dekodovan niz u kanalu sa greskom:  ";
    uredjaj->printNiz(dekodovan_niz_sa_greskom_kanala, N);
    std::cout << std::endl;*/
    std::cout << "Broj gresaka u kanalu: " << uredjaj->broj_pogresnih_karaktera(dekodovan_niz_bez_gresaka, dekodovan_niz_sa_greskom_kanala) << std::endl;
    std::cout << "Verovatnoca greske koju vidi korisnik: " << double(double(uredjaj->broj_pogresnih_karaktera(dekodovan_niz_bez_gresaka, dekodovan_niz_sa_greskom_kanala))/N) << std::endl;
    return 0;
}
