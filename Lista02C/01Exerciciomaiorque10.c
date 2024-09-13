#include <stdio.h>
#include <stdlib.h>
//01 Lista 02- Exercicio maior ou menor que 10
int main(){
	int num;
	printf("Digite um numero: ");
	scanf("%d",&num);
	
	if (num>10){
		printf("%d E MAIOR DO QUE 10!",num);
	}else if(num<10){
		printf("%d E MENOR QUE 10!",num);
	}else{
		printf("%d E IGUAL A 10",num);
	}
	return 0;
}
