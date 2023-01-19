/*1. Escreva um programa em C++ que lê uma seqüência de números de um arquivo e armazena
em um arranjo. Assuma que a quantidade de números no arquivo não ultrapassa o limite máximo
de elementos do arranjo (e.g. 1000).
*/

#include <stdio.h>

int main(void)
{
	FILE* f = fopen("naturais.txt", "r+t");
	if(f == NULL)
	{
		printf("Nao foi possivel abrir o arquivo para leitura. \n");
		return (1);
	}
	
	int arr[1000]; //arr de 'array'
	int i = 0;
	
	fscanf(f, "%d", &arr[i]); 
	while(!feof(f))
	{
		i++;
		fscanf(f, "%d", &arr[i]);
	}
	arr[i]= -1; //Uma sentinela, valor na ultima posição para que você ache a ultima posição quando não sabe a quantidade de elementos
	fclose(f);
	
	for(int j = 0; j < i; j++) printf("%d ", arr[j]);
	printf("\n");
	
	
	for(int j = 0; arr[j] != -1; j++) printf("%d ", arr[j]);
	printf("\n");
	
	return 0;
}
 
