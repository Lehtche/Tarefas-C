#include <stdio.h>
int main(){
//02-Escreva um algoritmo para ler as dimensoes de um retangulo (base e altura), calcular e escrever a area do retangulo
int base, altura, resultado;
printf("Escreva a base do retangulo: ");
scanf("%d",&base);
printf("Escreva a altura do retangulo: ");
scanf("%d",&altura);

resultado = base * altura;
printf("A area do retangulo e: %d",resultado);


 
	
	return 0;
}
