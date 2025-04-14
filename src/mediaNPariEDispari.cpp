/**
 * @file fareLaMediaDiNNumeri.cpp
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
    float sommaP=0;
    float sommaD=0;
    int qP=0;
    int qD=0;
 
    while (askAgain) {
        int n;
        std::cout << "Inserisci numero: " << std::endl;
        std::cin >> n;
        if (n%2==0) {
            sommaP+=n;
            qP++; 
        } else {
            sommaD+=n;
            qD++; 
        }
        std::cout << "Vuoi inserire un'altra coppia di numeri? (1=si, 0=no)" << std::endl;
        std::cin >> askAgain;
    } 

    std::cout << "Media Pari: " << sommaP/qP << std::endl;
    std::cout << "Media Dispari: " << sommaD/qD << std::endl;
 
}
