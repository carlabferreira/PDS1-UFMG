/* 
Escreva um programa em C++ que lê um arquivo com números reais (um número por linha) e
grava outro arquivo onde cada linha mostra o valor do respectivo número aplicado a função
f(x)= ax3+ bx2+ cx + d
onde a, b, c e d são lidos do teclado
*/
#include <stdio.h>
float funcao (float x, float a, float b, float c, float d)
{
	x = (a * pow(x,3)) + (b * pow(x,2)) + (c * x) + d;
	return (x);
}

int main (void)
{
	FILE* f1 = fopen("reais.txt", "r+t");
	if(f1 == NULL)
	{
		printf("Nao foi possivel abrir o arquivo para leitura. \n");
		return (1);
	}
	
	
	FILE* f2 = fopen("ResultadosQ5.txt", "w+t");
	if(f2 == NULL)
	{
		printf("Nao foi possivel abrir o arquivo para escrita. \n");
		fclose(f1);
		return (2);
	}
	
float a, b, c, d;
printf("Digite os parâmetros a, b, c e d\n");
scanf("%f%f%f%f", &a, &b, &c, &d);
	int i;
	fscanf(f1, "%f", &i); //lendo um numero antes para poder usar o feof da forma estudada com feof
	
	while(!feof(f1))
	{
		fprintf(f2, "%f %f\n", i, funcao(i, a, b, c, d)); //poderia escrever so zero ou um, vai de interpretacao
		fscanf(f1, "%d", &i);
	}
	fclose(f1);
	fclose(f2);
	return (0);
	
}
	
