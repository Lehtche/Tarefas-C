#include <stdio.h>
#include <locale.h>
int main(){
	/*01
	lista 03 -ler dois valores e se o segundo valor informado for 0, deve ser lido um novo valor
	ou seja, para o segundo valor, n�o pode ser aceito o valor zero e imprimir o resultado da divis�o
	do primeiro valor lido pelo segundo valor lido(while)*/
	int num1,num2;
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("Digite o primeiro n�mero: ");
	scanf("%d",&num1);
	printf("Digite o segundo n�mero: ");
	scanf("%d",&num2);	
	
	while (num2 == 0) {
		printf("Valor n�o aceito.Digite outro valor: ");
        scanf("%d", &num2);
    }

 
    printf("Resultado da divis�o: %f\n", (float)num1 / num2);

    return 0;
}
