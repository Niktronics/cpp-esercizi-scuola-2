/**
 * @file calcoloIMC.cpp
 *
 * @author Nicolò D.
 * @version 1.0
 * @date 2025-04-13
 * 
 */

#include <iostream>

int main(int argc, char *argv[])
{
    float peso, altezza, imc;
    
    std::cout << "Inserisci il peso in kg: ";
    std::cin >> peso;
    
    std::cout << "Inserisci l'altezza in metri: ";
    std::cin >> altezza;
    
    imc = peso / (altezza * altezza);
    
    std::cout << "\nIl tuo IMC e': " << imc << std::endl;
    
    if (imc < 18.5) {
        std::cout << "Sei sottopeso" << std::endl;
    } else if (imc >= 18.5 && imc < 25) {
        std::cout << "Sei normopeso" << std::endl;
    } else {
        std::cout << "Sei sovrappeso" << std::endl;
    }
    
    return 0;
}
 