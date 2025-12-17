cmake_minimum_required(VERSION 3.20)
project(pmt_dodatni_domaci)

set(CMAKE_CXX_STANDARD 17)

add_executable(pmt_dodatni_domaci
        main.cpp
        TelekomunikacioniUredjaj.h
        ZastitaKodaSaPonavljanjem.h
        TelekomunikacioniUredjaj.cpp
        ZastitaKodaSaPonavljanjem.cpp

)
