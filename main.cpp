#include <iostream>

#include "ZastitaKodaSaPonavljanjem.h"

int main ( ) {
    ZastitaKodaSaPonavljanjem * uredjaj = new ZastitaKodaSaPonavljanjem(5,3,0.1);
    int* izvorni = uredjaj->izvor();
    std::cout << "Izvor: ";
    uredjaj->printNiz(izvorni);
    std::cout << std::endl;

    return 0;
}
