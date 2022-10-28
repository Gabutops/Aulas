#include<stdio.h>


int main() {
	float sal;
	
	printf("Qual o seu salario?\n ->");
	scanf("%f",&sal);
	printf("***************************\n*");
	printf("o aumento do seu salario foi de R$%.2f, totalizando R$%.2f\n",sal*0.25, sal*1.25);
	
	printf("****************************");
	return 0;
}

