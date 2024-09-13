#include <stdio.h>
#include <locale.h>
/*12. Escreva um algoritmo que calcule e imprima a tabuada do 8 (1 a 10). */
int main(){
	int i,num;
	setlocale(LC_ALL,"Portuguese");
	
	for(i=1;i<=10;i++){
		printf("8 x %d= %d\n",num,8*i);
		num++;

	}
	
	
	return 0;
}
