#include<string.h>
#include<math.h>

int main()
{
	int lai;
	char lc;
	
	printf("ingresa un caracter: ");
	scanf("%c",&lc);
	printf("\n");
	lai= lc;
	printf("tiene codigo ascii':' %d\n\n",lai);
	if(lai>49 && lai<=57){
		printf("tu caracter es un numero");
	}
	else if(lai>=65 && lai<=90){
		printf("tu caracter es una letra mayuscula");
	}
	else if(lai>=97 && lai<=122){
		printf("tu caracter es una letra minuscula");
	}
	else{
		printf("tu caracter es un simbolo");
	}
}
