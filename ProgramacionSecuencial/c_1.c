// 01_01.c

/* Ingrese 2 enteros y ejecute las 4 operaciones basicas en forma entera*/

#include<stdio.h>
void main(void){
	int m, n;
	printf("4 Operaciones\n");
	printf("Ingrese dos enteros: ");
	scanf("%d %d", &m, &n);
	printf("%d + %d = %d\n", m, n, m+n);
	printf("%d - %d = %d\n", m, n, m-n);
	printf("%d * %d = %d\n", m, n, m*n);
	printf("%d / %d = %d\n", m, n, m/n);
}
