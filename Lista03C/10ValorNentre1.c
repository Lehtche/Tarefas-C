#include <stdio.h>
#include <locale.h>
/*10 -Ler um valor N e imprimir todos os valores inteiros entre 1 (inclusive) e N (inclusive). Considere que o N sera
sempre maior que ZERO. */
int main(){
	int i,N;
	setlocale(LC_ALL,"Portuguese");
	
	printf("Digite un número: ");
	scanf("%d",&N);
	
	for(i=1;i<=N;i++){
		printf("%d\n",i);
	}
	
	
	
	
	return 0;
}
