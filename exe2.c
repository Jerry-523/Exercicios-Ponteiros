#include <stdio.h>
#include <stdlib.h>

int main() 
{
    float numero1=7.3, numero2;
    float *fPtr;
    *fPtr = numero1;
    printf("O valor apontado por fPtr: %f\n", *fPtr);
    numero2 = *fPtr;
    printf("O numero 2: %f\nO endereco de numero1: %p\n", numero2, fPtr);

}