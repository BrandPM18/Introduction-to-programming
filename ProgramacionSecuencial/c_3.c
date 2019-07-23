// 03.c 

/* Separacion de un numero menor que 10000 */

#include<cstdio>
main(){
	int n, n1, uni, dec, cen;
	printf("Ingrese un entero < 10000: ");
	scanf("%d", &n);
	n1 = n;			// guardamos n en n1
	uni = n%10;
	n = n/10;
	dec = n%10;
	n = n/10;
	cen = n%10;
	n = n/10;
	printf("%d = %d unidades, %d decenas, %d centenas, %d miles\n", n1, uni, dec, cen, n);
}
