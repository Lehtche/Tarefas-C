#include <stdio.h>
int main(){
//04-ler o numero total de eleitores de um municipio, o numero de votos brancos, nulos
//e validos. Calcular e escrever o percentual que cada um representa em relacao ao total de eleitores

int vtbranco,vtnulo, vtvalid, total;
float pbranco, pnulo, pvalid;

printf("Digite o numero de votos brancos: ");
scanf("%d",&vtbranco);
printf("Digite o numero de votos nulos: ");
scanf("%d",&vtnulo);
printf("Digite o numero de votos : ");
scanf("%d",&vtvalid);

total= vtbranco+vtnulo+vtvalid;

	pbranco = (float)vtbranco / total* 100;
    pnulo = (float) vtnulo / total * 100;
    pvalid = (float)vtvalid / total * 100;

printf("\nPercentual de votos brancos: %.2f%%\n", pbranco);
printf("Percentual de votos nulos: %.2f%%\n",pnulo);
printf("Percentual de votos validos: %.2f%%\n",pvalid);



}
