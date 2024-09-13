#include <stdio.h>
#include <locale.h>

int main() {
	/* 02
	Lista03 Do While   */
    float num1, num2;
    
    setlocale(LC_ALL,"Portuguese");

    printf("Digite o primeiro valor: ");
    scanf("%f", &num1);

    do {
        printf("Digite o segundo valor : ");
        scanf("%f", &num2);

        if (num2 == 0) {
    
        }
    } while (num2 == 0);

    printf("O resultado da divisao e: %.2f\n", num1 / num2);

    return 0;
}
