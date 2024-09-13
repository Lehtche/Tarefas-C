//05 Lista 02-Ler o ano atual e o ano de nascimento de uma pessoa. Escrever uma mensagem que diga se ela poderia ou
//nao votar este ano (nao e necess´ario considerar o mes em que a pessoa nasceu)
#include <stdio.h>
int main(){
	int ano;
	printf("Digite o ano de nascimento:");
	scanf("%d",&ano);
	//considerando que estamos em 2024
	
	if(2024-ano<=15){
		printf(" Nao pode votar este ano.");
	}else{
		printf(" Pode votar este ano.");
	}
}
