#include <stdio.h>
#include <locale.h>

int main() {
	/* 04 
	Lista03 Do While valor invalido 2  */
    float num1, num2;
    
    setlocale(LC_ALL,"Portuguese");
    printf("Digite o primeiro valor: ");
    scanf("%f", &num1);

    do {
        printf("Digite o segundo valor : ");
        scanf("%f", &num2);

        if (num2 == 0) {
            printf("VALOR INVÁLIDO. Tente novamente.\n");
        }
    } while (num2 == 0);

    printf("O resultado da divisao e: %.2f\n", num1 / num2);

    return 0;
}

