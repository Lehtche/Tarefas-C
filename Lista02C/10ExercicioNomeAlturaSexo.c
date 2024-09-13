//Crie um algoritmo para, tendo como dados de entrada o nome, a altura e o sexo (M ou F) de uma pessoa,
//calcule e mostre seu peso ideal, utilizando as seguintes f´ormulas:
// para sexo masculino: peso ideal = (72, 7 × altura) - 58
//para sexo feminino: peso ideal = (62, 1 × altura) - 44, 7
#include <stdio.h>
int main (){
	char nome [50];
	float altura, pesoIdeal;
	char sexo;
	
	
	printf("Digite seu nome: ");
	scanf("%s",nome);
	printf("Digite sua altura: "); //usando .
	scanf("%f",&altura);
	printf("Digite o seu sexo [M] ou [F]: ");
	scanf("%s",&sexo);
	
	
	if(sexo =='M'){
	printf(" Nome: %s\n Voce tem %f de altura\n Voce e do sexo %s\n Logo seu Peso Ideial e : %f ",nome,altura,sexo, pesoIdeal = (72.7 * altura) - 58);
	}else if(sexo=='F'){
			printf(" Nome: %s\n Voce tem %f de altura\n Voce e do sexo %s\n Logo seu Peso Ideal e : %f ",nome,altura,&sexo, pesoIdeal = (62.1 * altura) - 44.7);
	}else{
		printf("Digite seu sexo novamente.");
	}
	return 0;
}

