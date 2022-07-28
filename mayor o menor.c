#include<stdio.h>
int main (){
	int a, b;
	printf("Ingrese el primer valor");
	scanf("%i",&a);
	printf("Ingrese el segundo valor");
	scanf("%i",&b);
	
	if (a<b){
		printf("El numero %i es menor", b );
	}
	else{
		printf("El numero %i es mayor", a);
	}
}
