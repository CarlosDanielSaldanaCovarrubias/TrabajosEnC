#include<stdio.h>
int main(){
	int i, dato, salir=1;
	while (salir){
		printf("\nDame un numero");
		scanf("%i",&dato);
		for(i=1;i<=12;i++){
			printf("\n%i*%i=%i",dato,i,dato*i);
		}
		getch();
		printf("\nDesea continuar");
		scanf("%i",&salir);
		system("cls");
	}
		printf("\nSalir del programa");
}
