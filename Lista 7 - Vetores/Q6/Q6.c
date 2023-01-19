/*Escreva uma função em C++ que recebe dois arranjoes de números reais u e v e a dimensão n
dos dois arranjoes e que retorna o produto escalar de u e v. O produto escalar de dois arranjoes é
dado pela seguinte expressão: u.v = u0.y0 + u1.y1 + u2.y2 + ... + un-1.yn-1. Assuma que n é menor
que o número máximo de elementos do arranjo (e.g. 1000).
*/

#include <stdio.h>

float produtoEscalar(float* u, float* v, int n)
{
	float s = 0; //soma
	for(int i = 0; i < n; i++) s += (u[i] * v[i]);
	return (s);
}

int main(void)
{
	FILE* f1 = fopen("naturais.txt", "r+t");
	if(f1 == NULL)
	{
		printf("Nao foi possivel abrir o arquivo para leitura. \n");
		return (1);
	}
	FILE* f2 = fopen("reais.txt", "r+t");
	if(f2 == NULL)
	{
		printf("Nao foi possivel abrir o arquivo para leitura. \n");
		fclose(f1);
		return (2);
	}
	
	float arr1[1000]; //arr de 'array'
	float arr2[1000];
	int i = 0;
	
	fscanf(f1, "%f", &arr1[i]);
	fscanf(f2, "%f", &arr2[i]);
	
	while(!feof(f1))
	{
		i++;
		fscanf(f1, "%f", &arr1[i]);
		fscanf(f2, "%f", &arr2[i]);
	}
	
	fclose(f1);
	fclose(f2);
	
	for(int j = 0; j < i; j++) printf("%f ", arr1[j]);
	printf("\n");

	for(int j = 0; j < i; j++) printf("%f ", arr2[j]);
	printf("\n");

	printf("O produto escalar eh %f \n", produtoEscalar(arr1, arr2, i));

	return 0;
}
