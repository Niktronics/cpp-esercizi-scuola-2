/**
 * @file datoUnNumeroVederePotenza2.cpp
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
    int numero;
    std::cout << "Inserisci un numero: ";
    std::cin >> numero;
    
    if (numero <= 0) {
        std::cout << "Il numero deve essere positivo!" << std::endl;
    }
    else if ((numero & (numero - 1)) == 0) {
        std::cout << numero << " e' una potenza di 2!" << std::endl;
    }
    else {
        std::cout << numero << " non e' una potenza di 2." << std::endl;
    }
    
    return 0;
}
 