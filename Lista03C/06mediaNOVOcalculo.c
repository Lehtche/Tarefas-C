#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	/*Acrescente uma mensagem ’NOVO CALCULO (S/N)?’ ao final do exerc´icio ´ 5. Se for respondido ’S’ deve
retornar e executar um novo c´alculo, caso contr´ario dever´a encerrar o algoritmo.*/
	float a1,a2,media;
	char resposta;

	do{
	
	printf("Digite a primeira nota: ");
	scanf("%f",&a1);
	printf("Digite a segunda nota: ");
	scanf("%f",&a2);
	
	 while (a1 < 0 || a1 > 10) { // enquanto a1 for menor que 0 ou maior que 10
        printf("Nota inválida. Digite uma nota entre 0 e 10: "); 
        scanf("%f", &a1);
    }

    while (a2 < 0 || a2 > 10) { // enquanto a1 for menor que 0 ou maior que 10
        printf("Nota inválida. Digite uma nota entre 0 e 10: "); 
        scanf("%f", &a2);
    }

     media = (a1 + a2) / 2;

    printf("A média das avaliações é: %.2f\n", media);
    
	do {
        printf("NOVO CALCULO (S/N)? ");
        scanf(" %c", &resposta);
            resposta = toupper(resposta);  // Transformar em maiúscula
        if (resposta != 'S' && resposta != 'N') {
        printf("Resposta invalida! Digite S ou N.\n");
            }
    }while (resposta != 'S' && resposta != 'N');

    } while (resposta == 'S');


    return 0;
}

