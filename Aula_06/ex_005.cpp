#include<stdio.h>

int i,contAprovados,contReprovados,contExame;

float n1,n2,res;

int main(){
	for(i=1;i<=10;i++){
		printf("\nAluno n:%d",i);
		printf("\nInsira a nota 01:");
		scanf("%f",&n1);
		printf("\nInsira a nota 02:");
		scanf("%f",&n2);
		res = (n1+n2)/2;
		printf("%.2f",res);
		if(res>=7 && res<=10){
			printf("\nAluno Aprovado");
			contAprovados++;
		}else if(res>=3 && res<7){
			printf("\nAluno Exame");
			contExame++;
		}else{
			printf("\nAluno Reprovado");
			contReprovados++;
		}
		printf("\n****************************");
	}
	printf("\n****************************");
	printf("\nRelatorio:\nAlunos Aprovados:%d\nAlunos de Exame:%d\nAlunos Reprovados:%d",contAprovados,contExame,contReprovados);
	
}
