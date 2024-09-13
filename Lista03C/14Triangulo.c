#include <stdio.h>
#include <locale.h>
int main(){
/*14.Faca um programa que leia um valor inteiro e crie um triˆangulo de *’s ao contr´ario. Por exemplo:Para n = 5: */
int n,i,a;
	setlocale(LC_ALL,"Portuguese");
	
	printf("Digite um número: ");
	scanf("%d",&n);
	
	for (i = n; i >= 1; i--) {        //  linhas
        for (a = 1; a <= i; a++) {    //  colunas
            printf("*");
        }
        printf("\n");  // Mudar de linha
    }

	return 0;
}
