#include <stdio.h>
#include <stdlib.h>

int multdg( int dig, int valor){
	return dig*valor;	
}

int main(int argc, char *argv[]) {

	int num1, num2, num3, num4, num5, num6, num7, num8, num9, numv, numv2;
	int valid1, valid2, valid3, valid4, valid5, valid6, valid7, valid8, valid9, sum, div, div2;


	printf("Digite seu CPF sem nenhum tipo de pontuacao: \n");
scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &num1, &num2, &num3, &num4, &num5, &num6, &num7, &num8, &num9, &numv, &numv2);
	
	sum = 	multdg(num1,10)+multdg(num2,9)+multdg(num3,8)+
			multdg(num4,7)+multdg(num5,6)+multdg(num6,5)+
			multdg(num7,4)+multdg(num8,3)+multdg(num9,2);
	sum *= 10;
	div = sum%11;
	
	if (div == 10) div = 0;
	
	sum = 	multdg(num1,11)+multdg(num2,10)+multdg(num3,9)+
			multdg(num4,8)+multdg(num5,7)+multdg(num6,6)+
			multdg(num7,5)+multdg(num8,4)+multdg(num9,3)+multdg(numv,2);
	sum *= 10;
	div2 = sum%11;
	if (div2 == 10) div2 = 0;04;
	
	if (div == numv && div2 == numv2) {
		printf("\nCPF valido!");
	} else {
		printf("\nCPF invalido!");
	}
	return 0;
}
