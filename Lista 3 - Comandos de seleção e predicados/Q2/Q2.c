//Lista 3: Comandos de seleção e predicados. - PDS1
//Carla Beatriz Ferreira - 2022097470
//Predicado - função que retorna verdadeiro ou falso

#include <stdio.h>

int main (void)
{
	int x, y, z;
	printf("Digite um número x: ");
	scanf("%i", &x);
	printf("Digite um número y: ");
	scanf("%i", &y);
	printf("Digite um número z: ");
	scanf("%i", &z);
	
	//Questão 2a
	if (x%2 == 0) printf("2a - O número x é par \n"); //divisão por 2 sem resto
	else printf("2a - O número x é impar \n");
	
	//Questão 2b
	if (x>= y && x<=z) printf("2b e 2c - O número x está no intervalo [y z] \n");
	else printf("2b e 2c - O número está fora do intervalo [y z] \n"); // ou if (x < y || x > z)
	
	return 0;
}

/*
bool par (int x)
{
	return (x%2 == 0);
} 
*/
