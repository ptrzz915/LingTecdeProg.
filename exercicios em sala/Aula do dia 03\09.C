#include <stdio.h>
#include <stdlib.h>


void exec2(){
	float reais, cotacao, dolar;
	printf("Digite quantos reais vc tem e a cotacao do dolar: \n");
	scanf("%f %f", &reais, &cotacao);
	
	dolar = reais / cotacao;
	
	printf("Voce tem %.2f dolares \n", dolar);
}

void exec3 () {
	float Cel, Far;
	printf("Digite a temperatura em graus Celsius: \n");
	scanf("%f", &Cel);
	
	Far = Cel * (9.0/5.0) + 32.0;
	
	printf("A temperatura em Farenheit eh %.2f", Far);
}

void exec8(){
	int s, horas, minutos, segundos;
	
	printf("Digite um valor em segundos: \n");
	scanf("%d", &s);
	
	horas = s / 3600;
	minutos = (s % 3600) / 60;
	segundos = s % 60;
	
	printf("Sao %d horas, %d minutos e %d segundos", horas, minutos, segundos);
}
int main(int argc, char *argv[]) {

	int op;
	printf("Insira qual exercicio voce quer resolver: [2|3|8]\n");
	scanf("%d", &op);
	
	switch(op) {

	case 2:
		exec2();
	break;
	
	case 3:
		exec3();
	break;
	
	case 8:
		exec8();
	break;
	
}
	return 0;
}
