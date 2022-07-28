#include<stdio.h>
float promedio (float a, float b, float c);
int main (){
	int x=10, y=15, z=20;
	float t;
	t=promedio(x,y,z);
	printf("el promedio es %f", t);
	
}
float promedio (float a, float b, float c){
	float total;
	total=(a+b+c)/3;
	return total;
}


