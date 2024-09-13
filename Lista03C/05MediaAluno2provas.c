#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	/*05
	Lista 03- Escreva um algoritmo para ler as notas da 1a. e 2a. avaliações de um aluno, calcule e imprima a média (simples)
	desse aluno. Só devem ser aceitos valores válidos durante a leitura(0 a 10) para cada nota */
	float a1,a2,media;
	
	printf("Digite a primeira nota: ");
	scanf("%f",&a1);
	printf("Digite a segunda nota: ");
	scanf("%f",&a2);
	
	 while (a1 < 0 || a1 > 10) { // enquanto a1 for menor que 0 ou maior que 10
        printf("Nota inválida. Digite uma nota entre 0 e 10: "); 
        scanf("%f", &a1);
    }
    while (a2 < 0 || a2 > 10) { 
        printf("Nota inválida. Digite uma nota entre 0 e 10: "); 
        scanf("%f", &a2);
    }
     media = (a1 + a2) / 2;

    printf("A média das avaliações é: %.2f\n", media);

    return 0;
}
