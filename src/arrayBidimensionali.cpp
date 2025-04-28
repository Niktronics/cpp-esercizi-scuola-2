/**
 * @file arrayBidimensionali.cpp
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
     // somma degli array bidimensionali / matrici
     int matrice1[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
     int matrice2[3][3] = {{9,8,7}, {6,5,4}, {3,2,1}};
     int somma[3][3];

     for (int i = 0; i < 3; i++) {
         for (int j = 0; j < 3; j++) {
             somma[i][j] = matrice1[i][j] + matrice2[i][j];
         }
     }

     for (int i = 0; i < 3; i++) {
         for (int j = 0; j < 3; j++) {
             std::cout << somma[i][j] << " ";
             if (j == 2) {
                 std::cout << std::endl;
             }
         }  
     }
 }
  