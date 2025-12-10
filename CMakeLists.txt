cmake_minimum_required(VERSION 3.31)
project(pmt_dodatni_domaci)

set(CMAKE_CXX_STANDARD 23)

add_executable(pmt_dodatni_domaci main.cpp
        TelekomunikacioniUredjaj.cpp
        TelekomunikacioniUredjaj.h
        ZastitaKodaSaPonavljanjem.cpp
        ZastitaKodaSaPonavljanjem.h)
