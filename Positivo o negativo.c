#include<stdio.h>
int main (){
	int n;
	printf("Ingrese el numero");
	scanf("%i",&n);
	
	if(n<0){
		printf("El numero es negativo", n);
	}
	else{
		printf("El numero es positivo", n);
	}
	
}
