#include <stdio.h>
int main(){
  // 01-Escreva um algoritmo para ler um valor (do teclado) e escrever (na tela) o seu antecessor	
	int valor;
	printf("Escreva um numero: ");
	scanf("%d",&valor);
	
	printf(" O antecessor de %d e %d",valor,valor-1);
	
	
	return 0;
}
