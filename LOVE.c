#include <stdio.h>

int main()
{
	printf("Ordentamiento de burbuja");
	int Numeros[10];
	int i;
	for ( i=0;i<10;i++)
	   scanf("%d", &Numeros[i]);
	
	for(i=0;i<10;i++)
	    printf("Numero en Numeros[%d] es %d", i, Numeros[i]);
	//for (int i=0;i)
	return 0;
}
