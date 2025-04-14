/**
 * @file dateNCoppieDiNumeriInteriVedereSeSonoOpposti.cpp
 *
 * @author Nicolò D.
 * @version 1.0
 * @date 2025-04-13
 * 
 */
 
#include <stdio.h>
#include <iostream>

 int main(int argc, char *argv[])
 {
    bool askAgain=true;

    while (askAgain) {
        int n,n2,coppieOpposte;
        std::cout << "Inserisci il primo numero: " << std::endl;
        std::cin >> n;
        std::cout << "Inserisci il secondo numero: " << std::endl;
        std::cin >> n2;
        if (n=-n2) {
            std::cout << "I numeri sono opposti" << std::endl; 
            coppieOpposte++;
        } else {
            std::cout << "I numeri non sono opposti" << std::endl;
        }
        std::cout << "Vuoi inserire un'altra coppia di numeri? (1=si, 0=no)" << std::endl;
        std::cin >> askAgain;
    }
    std::cout << "Hai inserito " << coppieOpposte << " coppie opposte" << std::endl;

 }
 