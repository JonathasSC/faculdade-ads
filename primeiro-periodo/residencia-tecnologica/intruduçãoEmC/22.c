#include <stdio.h>

int main(){
	int num1, num2, option;

	printf("Digite um numero ");
	scanf("%i",&num1);
	printf("Digite outro numero ");
	scanf("%i",&num2);

	printf("Qual operacao deseja realizar?\n1- Soma\n2- Subtracao\n3- Divisao\n4- multiplicacao\n: ");
	scanf("%i",&option);

	if (option == 1){
		printf("A soma dos dois valores = %d", num1 + num2);
	}
	if (option == 2){
		printf("A subtração dos dois valores = %d", num1 - num2);
	}
	if (option == 3){
		printf("A Divisão dos dois valores = %d", num1 / num2);
	}
	if (option == 4){
		printf("A Multiplicacao dos dois valores = %d", num1 * num2);
	}
}
