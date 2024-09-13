/* A jornada de trabalho semanal de um funcion´ario ´e de 40 horas. O funcion´ario que trabalhar mais de 40
horas receber´a hora extra, cujo c´alculo ´e o valor da hora regular com um acr´escimo de 50%. Escreva um
algoritmo que leia o n´umero de horas trabalhadas em um mˆes, o sal´ario por hora e escreva o sal´ario total do
funcion´ario, que dever´a ser acrescido das horas extras, caso tenham sido trabalhadas (considere que o mˆes
possua 4 semanas exatas).    */
#include <stdio.h>
int main(){
	float totalHorasMes,SalarioPorHora,valorHoraExtra,horaExtra,total;
	float JornadaNormal= 40*4;
	
	printf("Digite o numero de horas trabalhadas em um mes: ");
	scanf("%f",&totalHorasMes);
	
	printf("Digite o salario por hora: ");
	scanf("%f",&SalarioPorHora);
	
	if (totalHorasMes > JornadaNormal) { // se ele trabalhar mais que 40 horas semanais no mes 
        horaExtra= totalHorasMes - JornadaNormal; //as horas extra vai ser o total de horas dele com a difença da Jornada Normal
    }

    //  valor da hora extra
    valorHoraExtra = SalarioPorHora * 0.5;
    
    //salario total= Jornada Mensal normal * Salario por hora + o tempo extra de trabalho vezes o valor que valeu o trabalho
     total = (JornadaNormal * SalarioPorHora) + (horaExtra* valorHoraExtra); 
	
	printf("O salario total do funcionario e: %2.f",total);

	
	return 0;
}
