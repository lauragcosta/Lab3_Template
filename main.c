#include <stdio.h> 
#include <stdlib.h>
#include "math.h"
#include "input.h"
#include "recursion.h"

int main() {

    int seq[50] = {
            93, 32, 31, 36, 60, 1, 74, 87, 52, 2,
            76, 54, 74, 17, 90, 81, 96, 72, 22, 31,
            49, 83, 99, 1, 11, 55, 86, 39, 6, 10,
            48, 65, 52, 10, 86, 82, 43, 4, 3, 6,
            78, 35, 31, 82, 18, 1, 48, 80, 23, 38
            };
   
    /* Program code. */
    printf("\nValor Mínimo: %d", arrayMinimum(seq, 50));
    printf("\nSoma dos Pares: %d\n", arraySumEven(seq, 50));

    int val;
    int sumPar = 0;
    int index = 0;
    int sumEven = arraySumEven(seq, 50); 

    printf("\nValor a Atingir (entre 32 e %d): ", sumEven);
    readInteger(&val);

    for(int i=0; i<50; i++)
    {
        if(sumPar < val)
        {
            if(seq[i]%2 == 0)
            {
                sumPar += seq[i];
                index = i;
            }
        }
        else
        {
            break;
        }
    }
    printf("\nO valor %d é atingido no index %d\n", val, index);

    return EXIT_SUCCESS;
}
