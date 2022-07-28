#include<stdio.h>
int main (){
	int litros,dinero,cambio,gasolina,pesos,litros2;
	printf("La gasolina la quiere 1) Litro  2) Pesos? la gasolina cuesta $20");
	scanf("%d",&gasolina);
	switch(gasolina){
		case 1:
			printf("Cuantos litros necesitas?");
			scanf("%d",&litros);
			dinero=(litros*20);
			printf("Total de pagar es $%d",dinero);
			scanf("%d",&dinero);
			if(dinero>litros*20){
				cambio=(dinero-20);
				printf("Tu cambio es $%d",&cambio);
			}else{
				printf("Insuficiente dinero");
			}break;
		case 2:
			printf("Cuantos pesos necesitas?");
			scanf("%i",&litros2);
			pesos=(litros2/20);
			printf("Total de pagar es $%i",&pesos);
			scanf("%d",&pesos);
			if(pesos>litros/20){
				cambio=(pesos-20);
				printf("Tu cambio es $%i",&pesos);
			}else{
				printf("Insuficiente dinero");
			}break;
		default:
			printf("Opcion incorrecta");	
	}
}
