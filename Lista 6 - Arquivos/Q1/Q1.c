/* 
Escreva um programa em C++ que lê um número n do teclado e gera um arquivo com os n
primeiros números primos.
*/

#include <stdio.h>

int primo (int n) //retorna se o numero informado eh primo ou nao
{
	for(int i = n-1; i > 1; i--)
	{
		if(n%i == 0) return 0;
	}
	return (1);
}

int main (void)
{
	FILE* f = fopen("primos.txt", "w+t");
	if(f == NULL)
	{
		printf("Nao foi possivel abrir o arquivo. \n");
		return (1);
	}
	
	int n;
	printf("-- QUESTAO 1 -- \n");
	printf("Digite um número N: \n");
	scanf("%i", &n);
	
	int nprimos = 0;
	int aux = 2; //que voce vai verificar se eh primo, 2 eh o primeiro primo
	
	while(nprimos < n)
	{
		if (primo(aux))
		{
			fprintf(f, "%i\n", aux);
			nprimos++;
		}
		aux++;
	}
	// for(int aux=2; nprimos<n; i++) {}
	
	
	fclose(f);
	return (0);
}
