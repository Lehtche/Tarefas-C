#include <stdio.h>
int main(){
	/*8. Escreva um algoritmo para imprimir os n´umeros de 1 (inclusive) a 10 (inclusive) em ordem decrescente.*/
	int i;
	int num=10; 
	
	for(i=10;i>=1;i--){
		printf("%d\n",num);
		num--;
	}  
	
	return 0;
}
