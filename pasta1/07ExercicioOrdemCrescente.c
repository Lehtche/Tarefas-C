//07- Ler dois valores (considere que nao serao lidos valores iguais) e escreve-los em ordem crescente
#include <stdio.h>
int main(){
	int num1,num2;
	printf(" O primeiro valor: ");
	scanf("%d",&num1);
	printf("O segundo valor: ");
	scanf("%d",&num2);
	
	if(num1>num2){
		printf("Ordem crescente: %d, %d",num2,num1);
	}else{
		printf("Ordem crescente: %d, %d",num1,num2);
	}
}
