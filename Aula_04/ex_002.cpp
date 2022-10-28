#include <stdio.h>

int main (){
	float n1, n2;
	char op;
	
	printf("\nNumero 1: ");
	scanf("%f",&n1);
	printf("\nOperacao: ");
	scanf(" %c",&op);
	printf("\nNumero 2: ");
	scanf("%f",&n2);
	switch(op){
		case '+':
			printf("\nResultado: %.2f",n1+n2);
			break;
		
		case '-':
			printf("\nResultado: %.2f",n1-n2);
			break;
		
		case '/' :
			printf("\nResultado: %.2f",n1/n2);
			break;
		
		case '*' :
			printf("\nResultado: %.2f",n1*n2);
			break;
		
		default:
			printf("OPERACAO INVALIDA");
	}
}
