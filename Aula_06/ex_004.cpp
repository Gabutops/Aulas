#include <stdio.h>

int i,n,cont;

int main(){
	for(i=1;i<=30;i++){
		printf("Insira um numero: ");
		scanf("%d",&n);
		if(n>=5 && n<=100){
			printf("%d esta entre 5 e 100\n",n);
			cont++
		}else{
			printf("%d nao esta entre 5 e 100\n",n);
		}
		printf("*****************************\n");
	}
	printf("%d estao dentro do intervalo",cont);
}
