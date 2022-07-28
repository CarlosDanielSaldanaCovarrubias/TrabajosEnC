#include<stdio.h>
int main (){
	int v;
	printf("¿Cual es el valor?");
	scanf("%i",&v);
	
	if(v%2==0){
		printf("El numero %i es par", v);
	}
	else{
		printf("El numero %i es impar", v);
	}
}
