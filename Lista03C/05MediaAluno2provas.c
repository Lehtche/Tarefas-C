#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	/*05
	Lista 03- Escreva um algoritmo para ler as notas da 1a. e 2a. avalia��es de um aluno, calcule e imprima a m�dia (simples)
	desse aluno. S� devem ser aceitos valores v�lidos durante a leitura(0 a 10) para cada nota */
	float a1,a2,media;
	
	printf("Digite a primeira nota: ");
	scanf("%f",&a1);
	printf("Digite a segunda nota: ");
	scanf("%f",&a2);
	
	 while (a1 < 0 || a1 > 10) { // enquanto a1 for menor que 0 ou maior que 10
        printf("Nota inv�lida. Digite uma nota entre 0 e 10: "); 
        scanf("%f", &a1);
    }
    while (a2 < 0 || a2 > 10) { 
        printf("Nota inv�lida. Digite uma nota entre 0 e 10: "); 
        scanf("%f", &a2);
    }
     media = (a1 + a2) / 2;

    printf("A m�dia das avalia��es �: %.2f\n", media);

    return 0;
}
