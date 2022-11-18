#include <stdio.h>

char resp;
float val,total=0;
int qnt,prod;

int main(){
	do{
		printf("*********************\n");
		printf("Produto:\n>>");
		scanf("%d",&prod);
		if(prod == 100){
			printf("*********************\n");
			printf("Cachorro-quente\nR$10,00\n");
			printf("Quant:\n>>");
			scanf("%d",&qnt);
			val = 10*qnt;
			printf("valor: R$%.2f\n",val);
			total = total + val;
		}else if(prod == 101){
			printf("*********************\n");
			printf("Refrigerante\nR$5,00\n");
			printf("Quant:\n>>");
			scanf("%d",&qnt);
			val = 5*qnt;
			printf("valor: R$%.2f\n",val);
			total = total + val;
		}
		
		printf("Deseja continuar? s/n\n>>");
		scanf(" %c",&resp);
	}
	while(resp == 's');
	printf("*********************\n");
	printf("TOTAL: R$%0.2f",total);
}
