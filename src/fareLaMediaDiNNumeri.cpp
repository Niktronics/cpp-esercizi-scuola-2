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
    float somma=0;
    int q=0;
 
    while (askAgain) {
        int n;
        std::cout << "Inserisci numero: " << std::endl;
        std::cin >> n;
        somma+=n;
        q++;
        std::cout << "Vuoi inserire un'altra coppia di numeri? (1=si, 0=no)" << std::endl;
        std::cin >> askAgain;
    } 

    std::cout << "Media: " << somma/q << std::endl;
 
}
