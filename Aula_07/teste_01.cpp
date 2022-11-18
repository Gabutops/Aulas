#include <stdio.h>

int f=1;
int cont;
int main(){
	do{
		printf("\nOi, Mundo!\n");
		printf("Continuar: \n1-Sim\n2-Nao\n>>");
		scanf("%d",&f);
		if (f==1){
			cont=cont+1;
		}
			
	}
	while(f==1);
	printf("Voce repetiu %d vezes",cont);
}
