#include <stdio.h>
int main(){
	///05-ler o salario mensal atual de um funcionario e o percentual de reajuste.
//calcular e escrever o valor do novo salaario.

float sal,reajuste, novosal;

	printf("Digite o salario do funcionario: ");
	scanf("%f",&sal);
	
	printf("Digite o percentual de reajuste: ");
	scanf("%f",&reajuste);
	
	novosal = sal + (sal * reajuste / 100);

	printf("O novo valor do salario do funcionario e: %.2f",novosal);
	
	return 0;

}

