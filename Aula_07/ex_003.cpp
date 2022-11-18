#include <stdio.h>

int n,i,num;
int cont=0;
int main(){
	printf("Quantas vezes deseja somar?\n>>");
	scanf("%d",&n);
	while(i<n){
		printf("Insira um valor:\n>>");
		scanf("%d",&num);
		if (n>1){
			cont=cont+num;
			
		}
	i++;
	};
	printf("Soma dos numeros: %d",cont);
}
