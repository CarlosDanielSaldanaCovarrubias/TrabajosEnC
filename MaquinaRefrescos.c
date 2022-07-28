#include<stdio.h>
int main (){
	int precio, cambio, producto, pago;
	printf("Seleccione el producto 88)Coca Cola  76)Te 67)Agua ");
	scanf("%i",&producto);
	switch(producto){
		case 88:
			printf("page $15");
			scanf("%i",&pago);
			if(pago >= 15){
				cambio=pago-15;
				printf("Su cambio es %i", cambio);
			}else{
				printf("Falta mas dinero, vuelve intentarlo");
			}break;
		case 76:
			printf("page $17");
			scanf("%i",&pago);
			if(pago >= 17){
				cambio=pago-17;
				printf("Su cambio es %i", cambio);
			}else{
				printf("Falta mas dinero, vuelve intentarlo");
			}break;
			case 67:
			printf("page $12");
			scanf("%i",&pago);
			if(pago >= 12){
				cambio=pago-12;
				printf("Su cambio es %i", cambio);
			}else{
				printf("Falta mas dinero, vuelve intentarlo");
			}break;
		default:
			printf("Opcion incorrecta");
							  
	}
	
}
