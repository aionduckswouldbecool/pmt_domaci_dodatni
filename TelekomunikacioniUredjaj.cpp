//
// Created by PC on 12/10/2025.
//

#include "TelekomunikacioniUredjaj.h"
#include <random>

void TelekomunikacioniUredjaj::printNiz(int * niz) {
    for (int i = 0; niz[i] != duzina_sekvence_N; i++) {
        std::cout << niz[i] << " ";
    }
}

int TelekomunikacioniUredjaj::izvor_generator() {
    static std::random_device rd;
    static std::mt19937 gen(rd());
    static std::uniform_real_distribution<double> dist(0.0, 1.0);

    double x = dist(gen);
    return (x < 0.5) ? 0 : 1;
}

int* TelekomunikacioniUredjaj::izvor() {
    int *niz = new int[duzina_sekvence_N];
    for (int i = 0; i < duzina_sekvence_N; i++) {
        niz[i] = izvor_generator();
    }
}

