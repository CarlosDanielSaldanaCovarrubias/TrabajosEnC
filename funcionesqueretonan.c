#include<stdio.h>
#include<windows.h>
void triangulo();
void caracter();
void tabla();
int main (){

	int  opc;
	printf("\n\n1 para triangulo, 2 para caracter, 3 para tabla");
	scanf("%i",& opc);
	switch(opc){
		case 1:triangulo();
		break;
		case 2:caracter();
		break;
		case 3:tabla ();
		break;
	}
	return main();
}
void triangulo(){
	int n, j, i;
	printf("\ndame un dato: ");
	scanf("%i",&n);
	for(i=0;i<n;i++){
		//for(j=1;j<=n;j++){
		//while(n<=n-i){
		for(j=0;j<n-i;j++){
			printf("*");
		}
		printf("\n");
	}
	getch();
}
void caracter(){
	char letra;
	fflush(stdin);
	printf("inserter caracter: ");
	scanf("%c",&letra);
	if((int)letra >65 && (int)letra <90){
		printf ("letra mayuscula");
	}else if ((int)letra >97 && (int)letra <122){
		printf("letra miniscula");
	}else if ((int)letra >33 && (int)letra <47){
		printf("simbolo");
	}else if ((int)letra >48 &&(int)letra <57){
		printf("numero");
	}
	
}
void tabla(){
	int i, salir=1, dato;
	while (salir){
		printf("\ndame un dato ");
		scanf("%i",&dato);
		for(i=1;i<=12;i++){ // siempre llevan corchete
			printf("\n%i*%i=%i",dato, i, dato*i);
		}
		getch();
		printf("\ndeseas continuar ");
		scanf("\n%i ",&salir);
		system("cls");
	}
		printf("fin");
}
