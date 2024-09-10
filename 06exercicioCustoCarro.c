#include <stdio.h>
//um carro novo é a soma do custo da fáb, com a porcentagem e dos impostos do distribuidor
//supondo q o % do distribuidor seja 28% e os impostos 45%
//leia o custo de fáb de um carro, e escreva o custo final
int main(){
	float car,imposto,distribuidor, final;
	
	printf("Digite o custo de fabrica do carro: ");
	scanf("%f",&car);
	
	distribuidor=0.28;
	imposto=0.45;
	
	final=car+(car*distribuidor)+(car*imposto);
	
	printf("O custo final do carro e: %2.f ",final);
	
}


