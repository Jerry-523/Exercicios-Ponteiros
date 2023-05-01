#include <stdio.h>

int main() {
    int a[ ] = { 5, 15, 43, 54, 14, 2, 14, 2, 52, 72};
    int *p = &a[1], *q = &a[5];

    printf("O valor de *(p+3): %d\n", *(p+3));
    printf("O valor de *(q-3): %d\n", *(q-3));
    printf("O valor de q-p: %d\n", (q-p));

    if(p<q){
        printf("True\n");
    }else {
        printf("False\n");
    }
    if(*p<*q){
        printf("True\n");
    }else {
        printf("False\n");
    }
}