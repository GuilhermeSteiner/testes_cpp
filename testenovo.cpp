#include <stdio.h>
#include <stdlib.h>


int main () {

	double valoratual;

	if (scanf("%lf", &valoratual) == 1) {
		
		if (valoratual <= 0) {printf("Atenção! Digite um valor válido!");
				      continue;
	
				       }
	        else {break;}
	}

	else {printf("Atenção! Digite um valor válido!");}

	return 0;
}