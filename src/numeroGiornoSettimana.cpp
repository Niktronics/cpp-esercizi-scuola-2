/**
 * @file numeroGiornoSettimana.cpp
 *
 * @author Nicolò D.
 * @version 1.0
 * @date 2025-04-13
 * 
 */
 
#include <stdio.h>
#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
    
    string days[7] = {"Lunedì","Martedì","Mercoledì","Giovedì","Venerdì","Sabato","Domenica"};
    std::cout << "Inserisci id: " << std::endl;
    int id;
    std::cin >> id;
    std::cout << days[id-1] << std::endl;

}
