#include <stdio.h>

int main(){

	int n, ast=1, i, j; 
	
	printf("Ingresa tamanio de la piramide: ");
	scanf("%i",&n);

	printf("\n"); 
	
	  	for(j=1;j<=n;j++){
		  for(i=1;i<=ast;i++){
		  		printf("*");
			}
			printf("\n");
			ast= ast+1;  
		}
	return 0;
}
