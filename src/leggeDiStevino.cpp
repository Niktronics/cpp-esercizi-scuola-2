/**
 * @file leggeDiStevino.cpp
 *
 * @author Nicolò D.
 * @version 1.0
 * @date 2025-04-25
 * 
 */

 #include <stdio.h>
 #include <iostream>
 
 int main(int argc, char *argv[])
 {
      float p,d,g,h;

      std::cout << "Inserisci la densita': ";
      std::cin >> d;
      std::cout << "Inserisci la profondita': ";
      std::cin >> h;
      std::cout << "Inserisci la gravita': ";
      std::cin >> g;

      p = d * h * g;

      std::cout << "La pressione e': " << p << " Pa" << std::endl;

 }
  