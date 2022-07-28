#include<stdio.h>
#include<windows.h>
int main (){
	int n, j, k, i;
	for(i=0;i<=23;i++){
		for(j=0;j<=59;j++){
			for(k=0;k<=59;j++){
				printf("\n%i:%i:%i",i,j,k);
				system("cls");
			}
		}
	}
	getch();
	return main();
}
