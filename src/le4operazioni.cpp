/**
 * @file le4operazioni.cpp
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
    int n,n2;
    std::cout << "Inserisci il numero: " << std::endl;
    std::cin >> n;
    std::cout << "Inserisci un altro numero: " << std::endl;
    std::cin >> n2;
    std::cout << "Somma: " << n+n2 << std::endl;
    std::cout << "Moltiplicazione: " << n*n2 << std::endl;
    std::cout << "Divisione: " << n/n2 << std::endl;
    std::cout << "Sottrazione: " << n-n2 << std::endl;
}
