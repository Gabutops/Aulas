#include <stdio.h>

int n,i;

int main(){
		printf("Insira um valor: ");
		scanf("%d",&n);
	if(n>0){
		for(i=n;i>0;i--){
			printf("\n%d",i);
			n--;
		}
	}
	return 0;
}
