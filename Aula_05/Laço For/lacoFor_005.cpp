#include <stdio.h>

int n, i;
int main(){	
	printf("\nInsira um numero: ");
	scanf("%d",&n);
	if (n<0){
		printf("Numero Invalido");
	}else{
		printf("Contagem Regressiva:");
		for(i=n;i>=0;i--){
			printf("\n%d",i);
		}
	}
	return 0;
}
	
