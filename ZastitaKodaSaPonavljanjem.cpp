//
// Created by PC on 12/10/2025.
//

#include "ZastitaKodaSaPonavljanjem.h"

// konstruktor klase ZastitaKodaSaPonavljanjem
ZastitaKodaSaPonavljanjem::ZastitaKodaSaPonavljanjem(int N, int n, int p)
    :   TelekomunikacioniUredjaj(N),
        broj_ponavljanja_n(n),
        verovatnoca_greske_kanala_p(p){}

int* ZastitaKodaSaPonavljanjem::koder(int * niz) {
    int *novi_niz = new int[duzina_sekvence_N * broj_ponavljanja_n];
    for (int i = 0; i < duzina_sekvence_N; i++) {
        for (int j = 0; j < broj_ponavljanja_n; j++) {
            novi_niz[j+i] = novi_niz[i];
        }
    }
    delete(niz);
    return novi_niz;
}

void ZastitaKodaSaPonavljanjem::kanal(int * niz) {
    // ovde trebam da implementiram gresku
}

int* ZastitaKodaSaPonavljanjem::dekoder(int * niz) {
    // vracam niz duzine n * N u duzinu N
    int * niz = new int[duzina_sekvence_N];
    for (int i = 0; i < duzina_sekvence_N; i++) {}
}

