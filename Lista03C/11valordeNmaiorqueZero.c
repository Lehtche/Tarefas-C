#include <stdio.h>
#include <locale.h>
/*11. Modifique o exerc´icio anterior para aceitar somente valores maiores que 0 para N. Caso o valor informado
(para N) n˜ao seja maior que 0, dever´a ser lido um novo valor para N. */
int main(){
	int i,N;
	setlocale(LC_ALL,"Portuguese");
	
	
	printf("Digite un número: ");
	scanf("%d",&N);
	
	while (N == 0) {
		printf("Digite um número maior que zero: ");
        scanf("%d", &N);
    }
	
	for(i=1;i<=N;i++){
		printf("%d\n",i);
	}
	
	
	
	
	
	
	return 0;
}
