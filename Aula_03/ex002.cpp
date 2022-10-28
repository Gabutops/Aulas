#include <math.h>
#include <stdio.h>

int main(){
	int id;
	float t;
	
	printf("Quantos anos voce tem?\n");
	scanf("%d",&id);
	printf("Quantos anos de trabalho voce tem?\n");
	scanf("%f",&t);
	if (id>= 60|| t>=30 ||(id>=60 && t >= 25) ){
		printf("Com %d anos e %.02f anos de oficio.\nVoce preenche pelo menos um dos requisitos!",id,t);
	}else{
		printf("Com %d anos e %.02f anos de oficio.\nVoce nao corresponde a nenhum dos requisitos para o beneficio :(",id,t);
	};
	
}
