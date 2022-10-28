#include <stdio.h>

int main(){
	int n;
	printf("\ninsira um numero: ");
	scanf("%d",&n);
	switch(n){
		case -10 ... 0:
			printf("\n%d esta entre -10 e 0",n);
			break;
		case 1 ... 11:
			printf("\n%d esta entre 1 e 11",n);
			break;
		case 12 ... 24:
			printf("\n%d esta entre 12 e 24",n);
			break;
		case 25:
			printf("\n%d ",n);
			break;
		default:
			printf("\nIntervalo invalido");
	}
	
}
