/**
 * @file areaRettangolo.cpp
 *
 * @author Nicolò D.
 * @version 1.0
 * @date 2025-04-13
 * 
 */
 
#include <iostream>
#include <stdio.h>

int main(int argc, char *argv[])
{
    int base,altezza;
    std::cout << "Inserisci la base: " << std::endl;
    std::cin >> base;
    std::cout << "Inserisci l'altezza: " << std::endl;
    std::cin >> altezza;
    std::cout << "Area: " << (base*altezza)/2 << std::endl;
}