#include <stdio.h>
int main(){
 //03-Faca um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias e escreva a idade dessa
//pessoa expressa apenas em dias. Considerar ano com 365 dias e mes com 30 dias.
  	
  	int idade, mes, dias, resultado;
  	printf("Digite sua idade:");
  	scanf("%d",&idade);
  	printf("Digite seu messes:");
  	scanf("%d",&mes);
  	printf("Digite seus dias:");
  	scanf("%d",&dias);
  	
  	resultado = idade * 365 + mes *30 + dias;
  	printf("Voce tem:%d dias de vida",resultado);
  
  	 
  	 
  	
	
	
	
	
	
	return 0;
}
