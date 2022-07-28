#include<stdio.h>
int main (){
	int p, t, f;
	printf("Cada litro cubre 5 metros al cuadrado y cuesta $20 el litro, ¿Cuantos metros al cuadrado necesitas?");
	scanf("%d",&p);
	t=(p)/(5);
	f=(t)*(20);
	printf("Usted necesita %d litros ", t);
	printf("Y total a pagar $%d", f);
}
