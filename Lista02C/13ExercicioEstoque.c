/*Fa¸ca um algoritmo para ler: quantidade atual em estoque, quantidade m´axima em estoque e quantidade
m´inima em estoque de um produto. Calcular e escrever a quantidade m´edia ((quantidade m´edia = quantidade
m´axima + quantidade m´inima)/2). Se a quantidade em estoque for maior ou igual a quantidade m´edia escrever
a mensagem ’N˜ao efetuar compra’, sen˜ao escrever a mensagem ’Efetuar compra’.*/
#include <stdio.h>
int main(){
	int estoque, quantmax,quantmini;
	float media;
	
	printf("Quantidade atual em estoque: ");
	scanf("%d",&estoque);
	printf("Quantidade maxima em estoque: ");
	scanf("%d",&quantmax);
	printf("Quantidade minima em estoque: ");
	scanf("%d",&quantmini);
	
	media=(quantmax+quantmini)/2;
	
	if (estoque>=media){
		printf("Nao efetuar compra\nMedia=%2.f",media);
	}else{
		printf("Efetuar compra\nMedia=%2.f",media);
	}
	
	
	
	return 0;
}

