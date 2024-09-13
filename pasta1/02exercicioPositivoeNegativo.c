#include <stdio.h>
int main(){
	// 02 Lista 02-Ler um valor e escrever se e positivo ou negativo (considere o valor zero como positivo)
	float num;
	printf("Digite um numero: ");
	scanf("%f",&num);
	
	if (num<0){
		printf("%2.f e negativo",num);
	}else {
		printf("%2.f e positivo",num);
	}
	return 0;
}
