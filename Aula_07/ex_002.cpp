#include <stdio.h>

int n,i;
float medMaior = 0;
float medMenor = 0;

int contMaior = 0;
int contMenor = 0;
int main(){
	printf("Calculador de Numeros maiores que 50\n");
	for(i=1;i<=5;i++){
		printf("Insira um numero: ");
		scanf("%d",&n);
		if(n>=50){
			contMaior = contMaior + 1;
			medMaior = medMaior + n;
		}else{
			contMenor = contMenor + 1;
			medMenor = medMenor + n;
		}
	}
	printf("\nA media de numeros MAIORES que 50:	%0.2f\nA media de numeros MENORES que 50:	%0.2f",medMaior/contMaior,medMenor/contMenor);
}
