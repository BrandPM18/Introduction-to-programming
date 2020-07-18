//01_04.c
/*
  Cambio de grados centigrados a farenheith
*/
#include<stdio.h>
void main(void){
	float tc, tf;
	printf("Programa de conversión de grados\nIngrese los grados centígrados: ");
	scanf("%f", &tc);
	tf = 1.8 * tc + 32;
	printf("Grados farenheith: %.2f\n", tf);	

}
