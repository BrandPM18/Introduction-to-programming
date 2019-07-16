// 01_01.c
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
