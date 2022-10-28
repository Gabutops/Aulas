#include <stdio.h>

int main (){
	int cod;
	float sal, aum, nsal;
	printf("Digite o salario:\n");
	scanf("%f",&sal);
	printf("Codigo 1, 2 ou 3\n");
	scanf("%d",&cod);
	switch(cod){
		case 1:
			aum = sal*0.40;
			nsal = sal+aum;
			printf("Escrituario - Aumento R$%0.2f - Nsal R$%0.2f\n",aum,nsal);
		break;
		case 2:
			aum = sal*0.20;
			nsal = sal+aum;
			printf("Secretario - Aumento R$%0.2f - Nsal R$%0.2f\n",aum,nsal);
		break;
		case 3:
			aum = sal*0.10;
			nsal = sal+aum;
			printf("Gerente - Aumento R$%0.2f - Nsal R$%0.2f\n",aum,nsal);
		break;
		default:
			printf("CODIGO INVALIDO");
	}
}
