#include <stdio.h>
#include <stdlib.h>


#define deducao1 169.44
#define deducao2 381.44
#define deducao3 662.77
#define deducao4 896.00


float calc_inss(float salario_bruto) {
	if (salario_bruto <= 1412.00) return salario_bruto * 0.075;
	else if (salario_bruto <= 2666.68) return salario_bruto * 0.09;
	else if (salario_bruto <= 4000.03) return salario_bruto * 0.12;
	else return salario_bruto * 0.14;
}

float calc_irpf(float salario_base) {
	if (salario_base <= 2259.20) return 0.0;
	else if (salario_base <= 2826.65) return (salario_base * 0.075) - deducao1;
	else if (salario_base <= 3751.05) return (salario_base * 0.15) - deducao2;
	else if (salario_base <= 4664.68) return (salario_base * 0.225) - deducao3;
	else return (salario_base * 0.275) - deducao4;
}

int main() {
	float valor_hora, horas_trabalhadas;
	float salario_bruto, desconto_inss, salario_base, desconto_irpf, salario_liquido;

	printf("Digite o valor da hora trabalhada: R$ ");
	scanf("%f", &valor_hora);

	printf("Digite a quantidade de horas trabalhadas no mes: ");
	scanf("%f", &horas_trabalhadas);

	salario_bruto = horas_trabalhadas * valor_hora;

	desconto_inss = calc_inss(salario_bruto);
	salario_base  = salario_bruto - desconto_inss;

	desconto_irpf   = calc_irpf(salario_base);
	salario_liquido = salario_base - desconto_irpf;

	printf("\n======================================================\n");
	printf("    RECIBO DE PAGAMENTO DE SALARIO (CONTRA-CHEQUE)\n");
	printf("======================================================\n");
	printf("Salario Bruto (Horas x Valor):   R$%.2f\n", salario_bruto);
	printf("(-) Desconto INSS:               R$%.2f\n", desconto_inss);
	printf("(-) Desconto IRPF:               R$%.2f\n", desconto_irpf);
	printf("------------------------------------------------------\n");
	printf("LIQUIDO A RECEBER:               R$%.2f\n", salario_liquido);
	printf("======================================================\n");

	return 0;
}
