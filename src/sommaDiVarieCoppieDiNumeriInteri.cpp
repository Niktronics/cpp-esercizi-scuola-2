/**
 * @file sommaDiVarieCoppieDiNumeriInteri.cpp
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
    bool askAgain=true;

    while (askAgain) {
        int n,n2;
        std::cout << "Inserisci il primo numero: " << std::endl;
        std::cin >> n;
        std::cout << "Inserisci il secondo numero: " << std::endl;
        std::cin >> n2;
        std::cout << "Somma: " << n+n2 << std::endl;
        std::cout << "Vuoi inserire un'altra coppia di numeri? (1=si, 0=no)" << std::endl;
        std::cin >> askAgain;
    }

 }
 