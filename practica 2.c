#include<stdio.h>
int main (){
	int cal[5], promedio=0, i;
	for(i=0;i<5;i++){
		printf("\nCual fue de tu califacacion %i ", i+1);
		scanf("%i",&cal[i]);
		promedio=promedio+cal[i];	
	}
	printf("\nTu promedio es: %i", promedio/5);
	
}
