/* 
Escreva um programa em C++ que lê um arquivo com números naturais (um número por
linha) e grava outro arquivo onde cada linha indica se o respectivo número é primo ou não
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
	FILE* f1 = fopen("naturais.txt", "r+t");
	if(f1 == NULL)
	{
		printf("Nao foi possivel abrir o arquivo para leitura. \n");
		return (1);
	}
	
	
	FILE* f2 = fopen("eh_primo.txt", "w+t");
	if(f2 == NULL)
	{
		printf("Nao foi possivel abrir o arquivo para escrita. \n");
		fclose(f1);
		return (2);
	}
	
	int i;
	fscanf(f1, "%d", &i); //lendo um numero antes para poder usar o feof da forma estudada com feof
	
	while(!feof(f1))
	{
		fprintf(f2, "%d %d\n", i, primo(i)); //poderia escrever so zero ou um, vai de interpretacao
		fscanf(f1, "%d", &i);
	}
	fclose(f1);
	fclose(f2);
	return (0);
	
}
	
