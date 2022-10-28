#include <math.h>
#include <stdio.h>

int main(){
	float n1,n2,res;
	
	printf("\nCalculo de media das notas!\n");
	printf("\nInsira as notas do aluno\n");
	scanf("%f %f",&n2, &n2);
	res = (n1+n2)/2;
	
	if(res >= 7 && res<=10){
		printf("APROVADO");
	}else
		if(res >= 3 && res <7){
			printf("EXAME");
		}else{
			printf("REPROVADO");
		}
}
