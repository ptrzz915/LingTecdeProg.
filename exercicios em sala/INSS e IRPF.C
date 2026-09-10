#include <stdio.h>
#include <stdlib.h>
#define deducao1 169.44
#define deducao2 381.44
#define deducao3 662.77
#define deducao4 896.00

float calc_inss (float salario){
	if(salario<= 1412.00) return salario*0.075;
	else if (salario<= 2666.68) return salario*0.09; 
	else if (salario<= 4000.00) return salario*0.12;
	else return salario*0.14;
}

float calc_irpf (float salario_base){
	if (salario_base <= 2259.20) return salario_base;
	else if (salario_base<= 2259.21) return (salario_base*0.075) - deducao1;
	else if (salario_base<= 2826.66) return (salario_base*0.15);
	else if (salario_base<= 3751.05) return (salario_base*0.225);
	else return (salario_base*0.275);
}

int main(int argc, char *argv[]) {
	
	float salario, desconto_inss, desconto_irpf, salario_base;
	scanf("%f", &salario);
	
	desconto_inss = calc_inss(salario);
	printf("%f", desconto_inss);
	
	salario_base = salario - desconto_inss;
	printf("\n%f", salario_base);
	
	desconto_irpf = calc_irpf(salario_base);
	printf("\n%f", desconto_irpf);
	
	return 0;
}
