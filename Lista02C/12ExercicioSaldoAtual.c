/*Fa¸ca um algoritmo para ler: n´umero da conta do cliente, saldo, d´ebito e cr´edito. Ap´os, calcular e escrever o
saldo atual (saldo atual = saldo - d´ebito + cr´edito). Tamb´em testar se saldo atual for maior ou igual a zero
escrever a mensagem ’Saldo Positivo’, sen˜ao escrever a mensagem ’Saldo Negativo’.*/
#include <stdio.h>
int main(){
	float conta,saldo,debito,credito,saldoatual;
	printf("Digite o numero da conta do cliente: ");
	scanf("%f",&conta);
	printf("Digite o saldo do cliente: ");
	scanf("%f",&saldo);
	printf("Digite o debito do cliente: ");
	scanf("%f",&debito);
	printf("Digite o credito do cliente: ");
	scanf("%f",&credito);
	
	saldoatual=saldo-debito+credito;
	
	printf("Numero da conta: %f\n", conta);
    printf("Seu Saldo atual: R$ %.2f\n", saldoatual);
	
	if(saldoatual>=0){
		printf("Saldo Positivo");
	}else{
		printf("Saldo Negativo");
	}
	
	return 0;
}
