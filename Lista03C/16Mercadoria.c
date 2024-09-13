#include <stdio.h>
/*16. Uma loja est´a levantando o valor total de todas as mercadorias em estoque. Escreva um algoritmo que
permita a entrada das seguintes informa¸c˜oes: a) o n´umero total de mercadorias no estoque; b) o valor de cada
mercadoria. Ao final imprimir o valor total em estoque e a m´edia de valor das mercadorias.
 */
int main() {
    int mercadorias,i;
    float valorMercadoria, valorTotal = 0, media;

   
    printf("Digite o numero total de mercadorias no estoque: ");
    scanf("%d", &mercadorias);

    // Ler o valor de cada mercadoria e somar ao valor total
    for ( i = 1; i <= mercadorias; i++) {
        printf("Digite o valor da mercadoria %d: ", i);
        scanf("%f", &valorMercadoria);
        valorTotal += valorMercadoria;
    }

    // Calcular a média de valor das mercadorias
    if (mercadorias > 0) {
        media = valorTotal / mercadorias;
    } else {
        media = 0;
    }

    printf("O valor total em estoque e: %.2f\n", valorTotal);
    printf("A media de valor das mercadorias e: %.2f\n", media);

    return 0;
}
