#include <stdio.h>
int main(){
/*17. O mesmo exercicio anterior, mas agora nao sera informado o n´umero de mercadorias em estoque. Ent˜ao o
funcionamento dever´a ser da seguinte forma: ler o valor da mercadoria e perguntar ‘MAIS MERCADORIAS
(S/N)?’. Ao final, imprimir o valor total em estoque e a m´edia de valor das mercadorias em estoque. */

float valorMercadoria, valorTotal = 0, media;
    int contador = 0;
    char resposta;

    do {
        printf("Digite o valor da mercadoria: ");
        scanf("%f", &valorMercadoria);
        
        valorTotal += valorMercadoria;
        contador++;
       
        do {
            printf("MAIS MERCADORIAS (S/N)? ");
            scanf(" %c", &resposta);
            resposta = toupper(resposta);  // Transformar em maiúscula 
            if (resposta != 'S' && resposta != 'N') {
                printf("Resposta invalida! Digite S ou N.\n");
            }
        } while (resposta != 'S' && resposta != 'N');

    } while (resposta == 'S');
    if (contador > 0) {
        media = valorTotal / contador;
    } else {
        media = 0;
    }

    printf("O valor total em estoque e: %.2f\n", valorTotal);
    printf("A media de valor das mercadorias e: %.2f\n", media);

	return 0;
}
