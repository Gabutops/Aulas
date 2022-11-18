#include <stdio.h>

int i,cont;
float alt,med;
int main(){	
	for(i=0;i<=5;i++){
	printf("\nAluno n:%d",i);
	printf("\nInsira sua altura:");
	scanf("%f",&alt);
	cont+=alt;
	
	}
	med = cont/5;
	printf("\nTemos a media de %.2f",med);
	return 0;
}
