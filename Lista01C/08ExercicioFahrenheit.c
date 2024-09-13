#include <stdio.h>
#include <stdlib.h>

int main(){
	// 08- de Fanrenheit para Celsius
	float F, C;
	
	printf ("Digite uma temperatura em Fahrenheit:");
	scanf ("%f",&F);
	
	C = (F-32)*5/9;
	printf (" Este valor em Celsius e %f ", C);
	

return 0;
}

