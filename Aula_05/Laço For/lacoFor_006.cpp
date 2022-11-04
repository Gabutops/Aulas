#include <stdio.h>

int n,i;
int best_score_Aluno;
float v,r,a;
float best_score_Volume;

int main(){	
	best_score_Volume=0;
	printf("\nInsira o numero de alunos:");
	scanf("%d",&n);
	printf("\nCalculo de Volume de Cilindro");
	for(i=1;i<=n;i++){
		printf("\nAluno: %d",i);
		printf("\nPor favor, insira o raio:");
		scanf("%f",&r);
		printf("\nAgora, insira a altura:");
		scanf("%f",&a);
		v = 3.141592*r*r*a;
		printf("\nVolume: %.2f",v);
		if(v>best_score_Volume){
			best_score_Volume = v;
			best_score_Aluno = i;
		}
	}
	printf("\nO aluno %d, fez o maior volume de %.2f",best_score_Aluno,best_score_Volume);
	
	return 0;
}
	
