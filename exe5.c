#include <stdio.h>
#define N 10;

int main(){

  int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int *p = &a[0];
  int *q = &a[10 -1];
  int temp;
  while (p < q) {
    temp = *p;
    *p++ = *q;
    *q-- = temp;
    }
  for(int i=0; i<10; i++){
    printf("%d \n", a[i]);
  }
}