#include <stdio.h>
int main (){
	int h, d, r, t;
	printf("¿Cuantas tacos consumiste?");
	scanf("%d",&h);
	printf("¿Cuantos refrescos consumiste?");
	scanf("%d",&d);
	printf("¿Cuantos postres consumiste?");
	scanf("%d",&r);
	t=(h*16)+(d*18)+(r*12);
	printf("En total lo que consumiste es: $%d",t);
	return 0;
}
