#include <stdio.h>
#include <locale.h>
/*9. Escreva um algoritmo para imprimir os 10 primeiros n´umeros inteiros maiores que 100.  */
int main(){
	setlocale(LC_ALL,"Portuguese");
	int i, num=100;
	
	printf("Números inteiros maiores que 100:\n");
	for(i=1;i<=10;i++){
		num++;
		printf("%d\n",num);
	}
	
	return 0;
}
