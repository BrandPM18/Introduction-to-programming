// 01_02.c

/* Intercambio de numeros en las variables */
#include<stdio.h>
void main(void){
	int m, n, tem;
	printf("Intercambiar el valor de dos números\n");
	printf("Ingrese 2 enteros: ");
	scanf("%d %d", &m, &n);
	tem = m;
	m = n;
	n = tem;
	printf("Enteros intercambiados: %d, %d\n", m, n);
}
