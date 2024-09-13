//06 Lista 02-Ler dois valores (considere que n˜ao ser˜ao lidos valores iguais) e escrever o maior deles
#include <stdio.h>
int main(){
	float num1, num2;
	
	printf("Digite o primeiro numero: ");
	scanf("%f",&num1);
	printf("Digite o segundo numero: ");
	scanf("%f",&num2);
	
	if(num1>num2){
		printf("%2.f e maior que %2.f",num1,num2);
	}else if(num2>num1){
		printf("%2.f e maior que %2.f",num2,num1);
	}else{
		printf("%2.f sao iguais %2.f",num1,num2);
	}
}
