#include<stdio.h>
 int main(){
    float salario,comm, totalvendas, totalcomm, totalsal;
    int carrovendido;

    printf("Digite o salario do vendedor: ");
    scanf("%f",&salario);
    printf("Digite o valor da comissao: ");
    scanf("%f",&comm);
    printf("Digite o total de carros vendidos: ");
    scanf("%d",&carrovendido);

    printf("Total de vendas: ");
    scanf("%f",&totalvendas);

   totalcomm = carrovendido * comm;
 totalcomm = totalcomm + ( totalvendas * 5/100 );

    totalsal = totalcomm + salario;
    
    printf("O salario final do vendedor e: %8.2f", totalsal);

}

