//04 Lista 02-Ler as notas da 1ª. e 2ª. avaliacoes de um aluno. Calcular a media aritmetica simples e escrever uma
//mensagem que diga se o aluno foi ou nao aprovado (considerar que nota igual ou maior que 7 o aluno e
//aprovado). Escrever tambem a media calculada.
#include <stdio.h>
int main(){
	float nota1,nota2,media;
	
	printf("Digite a 1 nota: ");
	scanf("%f",&nota1);
	printf("Digite a 2 nota: ");
	scanf("%f",&nota2);
	
	media=(nota1+nota2)/2;
	if (media<=6){
		printf("Aluno Reprovado\nMedia:%2.f",media);
	}else{
		printf("Aluno Aprovado\nMedia:%2.f",media);
		
	}
}
