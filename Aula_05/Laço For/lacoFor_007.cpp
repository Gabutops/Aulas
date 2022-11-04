#include <stdio.h>

int i,cont;
int alt;
int main(){	
	for(i=0;i<=10;i++){
	printf("\nPessoa n:%d",i);
	printf("\nInsira sua altura(em cm):");
	scanf("%d",&alt);
	if (alt>160){
		cont=cont+1;
	}
	}
	printf("\nTemos %d pessoas com mais de 1.60!",cont);
	return 0;
}
	
