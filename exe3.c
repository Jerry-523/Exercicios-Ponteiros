#include <stdio.h>
#include <stdlib.h>

int main() {
    unsigned int vetor[5] = {2, 4, 6, 8, 10};
    int* vPtr; 

    for (int i=0; i<5; i++){
        printf("%u \n", vetor[i]);
    }

    vPtr = &vetor[0];
    *vPtr = 1002500;

    for (int i=0; i<5; i++) {
        printf("%u \n", *(vPtr + i));
    }

    for (int i=0; i<5; i++) {
        printf("%u \n", *(vetor + i));
    }

    unsigned int quarto = vetor[3];
    unsigned int quartoPtr = *(vPtr + 3);

    vPtr = &vetor[0];
    *vPtr = *vPtr +3;
    printf("%d \n", *vPtr);
}