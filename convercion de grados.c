#include<stdio.h>
#include<windows.h>
float conervcion, c, f, k;
int main(){
	float f, convercion, k;
	int j;
	printf("\n que convercion vas a hacer? 1)c_a_f 2)f_a_c 3)k_a_c 4)c_a_k 5)k_a_f 6)f_a_k");
	scanf("%i",&j);
	switch(j){
		case 1:c_a_f();
		break;
		case 2:f_a_c();
		break;
		case 3:k_a_c();
		break;
		case 4:c_a_k();
		break;
		case 5:k_a_f();
		break;
		case 6:f_a_k();
		break;		
		}
}
int c_a_f(){
	float convercion, c;
	printf("\ninserta los grados que vas a convertir");
	scanf("%i",&c);
	convercion= c * 1.8 + 32;
	printf("el resultado es %i",convercion);
	return 0;
}
int f_a_c(){
	float convercion, c;
	printf("inserta los grados que vas a convertir");
	scanf("%f",&c);
	conervcion= (c-32)/1.8;
	printf("el resultado es %i", convercion);
	return 0;
}
int k_a_c(){
	float c;
	printf("inserta los grados que vas a convertir");
	scanf("%f",&c);
	conervcion= c-273.15;
	printf("el resultado es %i",convercion);
	return 0;
}
int c_a_k(){
	float c;
	printf("inserta los grados que vas a convertir");
	scanf("%f",&c);
	conervcion= c+273.15;
	printf("el resultado es %i",convercion);
	return 0;
}
int k_a_f(){
	float c;
	printf("inserta los grados que vas a convertir");
	scanf("%f",&c);
	conervcion= (c-273.15*1.8)+32;
	printf("el resultado es %i",convercion);
	return 0;
}
int f_a_k(){
	float c;
	printf("inserta los grados que vas a convertir");
	scanf("%f",&c);
	conervcion= c-32/1.8+273.15;
	printf("el resultado es %i",convercion);
	return 0;
}
