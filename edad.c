#include<stdio.h>
int main (){
	int edad;
	printf("¿Cual es tu edad?");
	scanf("%i",&edad);
	
	if(edad>18){
		printf("Eres mayor de edad");
	}
	else if(edad<5){
		printf("Eres un bebe");
	}
	else if(edad>=5 && edad<12){
		printf("Eres un niño");
	}
	else if(edad>=12 && edad<18){
		printf("Eres un adolecente");
	}
	else{
		printf("Eres un adulto");
	}
	

}
