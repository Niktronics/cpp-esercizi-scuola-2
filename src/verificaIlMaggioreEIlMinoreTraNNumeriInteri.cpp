/**
 * @file verificaIlMaggioreEIlMinoreTraNNumeriInteri.cpp
 *
 * @author Nicolò D.
 * @version 1.0
 * @date 2025-04-13
 * 
 */

 #include <stdio.h>
 #include <iostream>
 #include <algorithm>

 int main(int argc, char *argv[])
 {
    int q;
    std::cout << "Inserisci la quantita': " << std::endl;
    std::cin >> q;
    int array[q];
    for (int i = q; i>=0 i++) {
        std::cout << "Inserisci un numero (" << i << "/" << q << ")" << std::endl;
        std::cin >> array[q-i];
    }
    int max =* max_element(array, array+q+1);
    int min =* min_element(array, array+q+1);
    std::cout << "Il numero maggiore e': " << max << std::endl;
    std::cout << "Il numero minore e': " << min << std::endl;
 }
 