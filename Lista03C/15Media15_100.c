#include <stdio.h>
#include <locale.h>
/*15. Faca um algoritmo que calcule e escreva a m´edia aritm´etica dos n´umeros inteiros entre 15 (inclusive) e 100 (inclusive). */
int main(){
	int i,soma = 0, contador = 0;
    float media;

    for (i = 15; i <= 100; i++) {
        soma += i;
        contador++;
    }

    media = (float) soma / contador;

    printf("A media aritmetica dos numeros entre 15 e 100 e: %.2f\n", media);
	
	return 0;
}
