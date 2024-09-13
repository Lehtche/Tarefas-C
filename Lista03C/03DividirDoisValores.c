#include <stdio.h>
#include <locale.h>
int main(){
	/*03 valor invalido 1
	lista 03 -ler dois valores e se o segundo valor informado for 0, deve ser lido um novo valor
	ou seja, para o segundo valor, não pode ser aceito o valor zero e imprimir o resultado da divisão
	do primeiro valor lido pelo segundo valor lido(while)*/
	int num1,num2;
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("Digite o primeiro número: ");
	scanf("%d",&num1);
	printf("Digite o segundo número: ");
	scanf("%d",&num2);	
	
	while (num2 == 0) {
        printf("VALOR INVÁLIDO.\n");
        printf("Digite novamente: ");
        scanf("%d", &num2);
    }

 
    printf("Resultado da divisão: %f\n", (float)num1 / num2);

    return 0;
}
