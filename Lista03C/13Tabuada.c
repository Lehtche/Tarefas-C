#include <stdio.h>
#include <locale.h>
/*13. Ler um valor inteiro (aceitar somente valores entre 1 e 10) e escrever a tabuada de 1 a 10 do valor lido. */
int main(){
	setlocale(LC_ALL,"Portuguese");
	int i,num;
	
	printf("Digite um número: ");
	scanf("%d",&num);
	
	while(num<1 && num>10){
		printf("Digite novamente: ");
		scanf("%d",&num);
	}
	
	for(i=1;i<=10;i++){
		printf("%d x %d= %d\n",num,i,num*i);
	}
	
	
	
	return 0;
}
