#include<stdio.h>
int main (){
	int h;
	printf("Ingrese la hora");
	scanf("i%",&h);
	
	if(h<12){
		printf("buenos dias");
	}
	else if(h>12 && h<19){
		printf("buenas tardes");
	}
	else{
		printf("buenas noches");
	}
		
	
}
