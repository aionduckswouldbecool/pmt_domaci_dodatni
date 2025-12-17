//
// Created by PC on 12/10/2025.
//
#include <random>
#include "ZastitaKodaSaPonavljanjem.h"
// konstruktor klase ZastitaKodaSaPonavljanjem
ZastitaKodaSaPonavljanjem::ZastitaKodaSaPonavljanjem(int N, int n, double p)
    :   TelekomunikacioniUredjaj(N),
        broj_ponavljanja_n(n),
        verovatnoca_greske_kanala_p(p){}

int* ZastitaKodaSaPonavljanjem::koder(int * niz) {
    int *novi_niz = new int[duzina_sekvence_N * broj_ponavljanja_n];
    for (int i = 0; i < duzina_sekvence_N; i++) {
        for (int j = 0; j < broj_ponavljanja_n; j++) {
            novi_niz[j+i*broj_ponavljanja_n] = niz[i];
        }
    }
    delete(niz);
    return novi_niz;
}
int *ZastitaKodaSaPonavljanjem::greska_kanala_niz() {
    int * greska_niz = new int[duzina_sekvence_N* broj_ponavljanja_n];
    for (int i = 0; i < duzina_sekvence_N*broj_ponavljanja_n; i++) {
        greska_niz[i] = greska_generator();
    }
    return greska_niz;
}
int ZastitaKodaSaPonavljanjem::greska_generator() { // vraca nazad 0 ili 1 sa p sansom ispisa 1
    static std::random_device rd;
    static std::mt19937 gen(rd());
    static std::uniform_real_distribution<double> dist(0.0, 1.0);

    double x = dist(gen);
    return (x <= this->verovatnoca_greske_kanala_p) ? 1 : 0;
}
int* ZastitaKodaSaPonavljanjem::kanal(int * ulazni_niz, int* greska_niz) {
    int * povratni_niz = new int[duzina_sekvence_N*broj_ponavljanja_n];
    for (int i = 0; i < duzina_sekvence_N*broj_ponavljanja_n; i++) {
        povratni_niz[i] = ulazni_niz[i] ^ greska_niz[i];
    }
    return povratni_niz;
}

int* ZastitaKodaSaPonavljanjem::dekoder(int * niz) {
    // vracam niz duzine n * N u duzinu N
    int br0=0, br1=0,brojac =0;
    int * dekodovan_niz = new int[duzina_sekvence_N];
    for (int i = 0; i < duzina_sekvence_N; i++) {
        br0 = 0, br1 = 0;
        for (int j = 0; j < broj_ponavljanja_n; j++) {
            if (niz[i*broj_ponavljanja_n+j] == 1) br1++;
            else br0++;
        }
        if (br1>br0) dekodovan_niz[brojac++] = 1;
        else dekodovan_niz[brojac++] = 0;
    }
    delete (niz);
    return dekodovan_niz;
}

