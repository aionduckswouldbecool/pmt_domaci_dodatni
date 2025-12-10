
//
// Created by PC on 12/10/2025.
//
#pragma once

#ifndef ZASTITAKODASAPONAVLJANJEM_H
#include "TelekomunikacioniUredjaj.h"
#define ZASTITAKODASAPONAVLJANJEM_H
class ZastitaKodaSaPonavljanjem : public TelekomunikacioniUredjaj {
public:
    ZastitaKodaSaPonavljanjem(int N);
protected:
    virtual int* koder () override;
    virtual void kanal () override;
    virtual int* dekoder() override;
    // sutra odradi fje ovih override-ovanih metoda
private:

};



#endif //ZASTITAKODASAPONAVLJANJEM_H
