#include <math.h>
#include <stdio.h>

int main(){
	int n;
	
	printf("Insira um numero:\n->");
	scanf("%d",&n);
	if(n>=5 && n<=100){
		printf("O numero %d e maior que 5 e menor que 100\n",n);
		
	}else{
		printf("O numero %d e menor que 5 ou maior que 100\n",n);
		
	};
	
}
