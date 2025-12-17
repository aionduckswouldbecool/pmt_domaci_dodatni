#include <iostream>

#include "ZastitaKodaSaPonavljanjem.h"
#include "ZastitaKodaSaPonavljanjem.cpp"
#include "TelekomunikacioniUredjaj.h"
#include "TelekomunikacioniUredjaj.cpp"
int main ( ) {
    int N,n; // N duzina inicijalnog niza, n broj ponavljanja, p neki possibility
    N = 5;
    n = 3;
    double p = 0.7;
    ZastitaKodaSaPonavljanjem * uredjaj = new ZastitaKodaSaPonavljanjem(N,n,p);
    int* izvorni = uredjaj->izvor();
    int koder_duzina = n * N;
    std::cout << "Izvor: ";
    uredjaj->printNiz(izvorni, N);
    std::cout << std::endl;
    int * koder = uredjaj->koder(izvorni);
    std::cout << "Koder izvor:       ";
    uredjaj->printNiz(koder, koder_duzina);
    std::cout << std::endl;
    std::cout << "Greska kanala niz: ";
    int * greska_kanala_niz = uredjaj->greska_kanala_niz();
    uredjaj->printNiz(greska_kanala_niz, koder_duzina);
    std::cout << std::endl;
    int * niz_posle_kanala = uredjaj->kanal(koder, greska_kanala_niz);
    std::cout<< "Niz posle prolazka u kanalu: ";
    uredjaj->printNiz(niz_posle_kanala, koder_duzina);
    std::cout << std::endl;
    int * dekodovan_niz_bez_gresaka = uredjaj->dekoder(koder);
    std::cout << "Dekodovan niz da nije bilo gresaka: ";
    uredjaj->printNiz(dekodovan_niz_bez_gresaka, N);
    std::cout << std::endl;
    int * dekodovan_niz_sa_greskom_kanala = uredjaj->dekoder(niz_posle_kanala);
    std::cout << "Dekodovan niz u kanalu sa greskom:  ";
    uredjaj->printNiz(dekodovan_niz_sa_greskom_kanala, N);
    std::cout << std::endl;
    return 0;
}
