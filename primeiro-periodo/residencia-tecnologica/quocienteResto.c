#include <stdio.h>
#include <stdlib.h>

int num1, num2 , quoci, rest = 0;

int main () {
	printf("Digite um valor: ");
	scanf("%i",&num1);

	printf("Digite outro valor: ");
	scanf("%i",&num2);
	
	quoci = num1 / num2;
	rest = num1 % num2;
	printf("A divisão de %i / %i = %i \nE sobra: %i",num1,num2,quoci,rest);
	
	return 0;
}
