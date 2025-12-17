//
// Created by PC on 12/10/2025.
//

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
            novi_niz[j+i] = novi_niz[i];
        }
    }
    delete(niz);
    return novi_niz;
}

void ZastitaKodaSaPonavljanjem::kanal(int * niz) {
}

int* ZastitaKodaSaPonavljanjem::dekoder(int * niz) {
    // vracam niz duzine n * N u duzinu N
    int br0=0, br1=0,brojac =0;
    int * dekodovan_niz = new int[duzina_sekvence_N];
    for (int i = 0; i < duzina_sekvence_N*broj_ponavljanja_n; i+broj_ponavljanja_n) {
        br0 = 0, br1 = 0;
        for (int j = 0; j < broj_ponavljanja_n; j++) {
            if (dekodovan_niz[i+j] == 1) br1++;
            else br0++;
        }
        if (br1>br0) dekodovan_niz[brojac++] = 1;
        else dekodovan_niz[brojac++] = 0;
    }
    delete (niz);
    return dekodovan_niz;
}

