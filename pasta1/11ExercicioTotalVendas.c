/* 11 Lista02-Ler o salario fixo e o valor das vendas efetuadas pelo vendedor de uma empresa. Sabendo-se que ele recebe
uma comissao de 3% sobre o total das vendas at´e R$1.500, 00 mais 5% sobre o que ultrapassar este valor,
calcular e escrever o seu salario total.*/
#include <stdio.h>
int main(){
	float salario,valordasvendas,comissao, salariototal;
	
	printf("Digite o salario fixo do vendedor: "); //salario dele
	scanf("%f",&salario); 
	
	printf("Digite o valor da venda: "); //valor das vendas efetuadas
	scanf("%f",&valordasvendas);
	

	if(valordasvendas<=1.500){   
		comissao=(valordasvendas*0.3);  // ele recebe de comissao 3% do valorvendas 
	}else{
		comissao= 1500 * 0.03 + (valordasvendas - 1500) * 0.05; // 3% sobre R$ 1.500 mais 5% sobre o valor que ultrapassar
	} //comissao é igual ao acrescimo de 3% + os 5% do valor que ultrapassar 1500 
	
	 salariototal = salario + comissao;
	
	  printf("O salario total do vendedor e: R$ %.2f\n", salariototal);
	
	return 0;
}

