/**
 * @file fibonacci.cpp
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
     
    int n = 1;
    int n2 = 1;

    int q = 0;

    std::cout << "Inserisci quanti numeri vuoi visualizzare: ";
    std::cin >> q;
 
    for (int i = 0; i < q; i++) {
        int s = n+n2;
        std::cout << s << std::endl;
        n=n2;
        n2=s;
    }

 }
 