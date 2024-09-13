//03 Lista 02- As macas custam R$1, 30 cada se forem compradas menos de uma duzia, e R$1, 00 se forem compradas pelo
//menos 12. Escreva um programa que leia o numero de macas compradas, calcule e escreva o custo total da compra
#include <stdio.h>
int main(){
	float maca;
	
	printf("Digite o numero de macas compradas: ");
	scanf("%f",&maca);
	
		if (maca<12){
		printf("A compra custou: %f reais",maca*1.30);
	}else if(maca>=12){
		printf("A compra custou: %f reais",maca*1.00);
	}
	return 0;
}

