#include<stdio.h>

int main(){
	char nome[50];
	double salarioFixo, vendas,total;
	
	//entrada dos dados, nome, salário fixo e total de vendas.
	scanf("%s", nome);
	scanf("%lf",&salarioFixo);
	scanf("%lf",&vendas);
	
	//calculo da comissão
	total=salarioFixo+(vendas*0.15);
	
	//imprimir em tela o valor total
	printf("Total = R$ %.2lf\n",total);
	
	
	return 0;
}
