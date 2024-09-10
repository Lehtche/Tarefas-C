#include <stdio.h>
//09-algoritmo que leia tres notas de um aluno, calcule e escreva a media final deste aluno. Considerar q
//a media e ponderada e que o peso das notas e 2, 3 e 5. Formula para o calculo da media final e:

int main(){
	float nota1,nota2,nota3, media;
	printf("Digite a 1 nota:");
	scanf("%f",&nota1);
	printf("Digite a 2 nota:");
	scanf("%f",&nota2);
	printf("Digite a 3 nota:");
	scanf("%f",&nota3);
	//2N1 + 3N2 + 5N3/10
	
	media=(2*nota1+3*nota2+5*nota3)/10;
	
	printf("A media final do aluno considerando os pesos e: %f",media);

}

