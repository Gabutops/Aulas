#include <math.h>
#include <stdio.h>

int main(){
	float a,b,c;
	
	printf("Vamos ver que tipo de triangulo voce faz!\n");
	printf("Primeiro vamos ver o lado A, por favor insira um valor:\n")
	scanf("%f",&a);
	printf("Agora insira o valor do lado B:\n");
	scanf("%f",&b);
	printf("Agora insira o valor do lado C:\n");
	scanf("%f",&c);
	// && condicao para todos os lados iguais //
	if(a==b && b==c && c==a){
		printf("Seu triangulo tem 3 lados iguais, logo e um equilatero\n");
	}else
		// || condicao para pelo menos dois lados iguais //
		if(a==b || a==c || b==c){
			printf("Seu triangulo tem 2 lados iguais, logo e um isoceles\n");
		}
		// nenhuma dos lados sao iguais //
		else{
			printf("Seu triangulo nao possui nenhum lado igual, logo e um escaleno\n");
		}
	
	
}
