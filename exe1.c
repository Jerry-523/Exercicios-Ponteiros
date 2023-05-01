#include <stdio.h>

int main()
{
	float numeros[10] = {0.0, 1.1, 2.2, 9.9};
	int i;
	numeros[9] = 3.3;
	for(i=0; i<10; i++){
		printf("Numero[%d] = %f\n", i, numeros[i]);
	} 

	float *nptr = numeros;
	for(i=0; i<10; i++){
		printf("Numero[%d] = %f\n",i, *nptr);
		nptr++;
	}
	*nptr = numeros[3];
	printf("\nO quarto elemento: %f", *nptr);
	printf("\nO quarto elemento: %f\n", numeros[3]);
	nptr = numeros;
	nptr+=8;
	// Imprime o elemento numeros[8]
	printf("%f\n", *nptr);
	nptr = &numeros[5];
	nptr-=4;
	printf("%f\n", *nptr);
	return 0;
}
