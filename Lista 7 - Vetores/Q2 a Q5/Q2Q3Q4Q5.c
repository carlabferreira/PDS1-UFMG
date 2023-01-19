/*Q2 - Escreva uma função em C++ que recebe um arranjo de números reais v e número de
elementos n armazenados em v e que retorna a média dos n elementos armazenados em v.
Assuma que n é menor que o número máximo de elementos do arranjo (e.g. 1000).
*/

/*Q3 - Escreva uma função em C++ que recebe um arranjo de números reais v e número de
elementos n armazenados em v e que retorna a variância dos n elementos armazenados em v.
Assuma que n é menor que o número máximo de elementos do arranjo (e.g. 1000).
*/
// Para variancia:
// 		media dos valores
// 		x = cada numero - valor da media total
//		Variancia = (x1^2 + x2^2 ... xn^2) / n

/*Q4 - Escreva uma função em C++ que recebe um arranjo de números reais v e número de
elementos n armazenados em v e que retorna o maior dos n elementos armazenados em v.
Assuma que n é menor que o número máximo de elementos do arranjo (e.g. 1000).
*/

/*Q5 - Escreva uma função em C++ que recebe um arranjo de números reais v e número de
elementos n armazenados em v e que retorna o menor dos n elementos armazenados em v.
Assuma que n é menor que o número máximo de elementos do arranjo (e.g. 1000).
*/

//Utilizando o arranja preenchido com a Q1, modificado para numeros float
#include <stdio.h>

float media(float* v, int n) //float* = arranjo de floats
{
	float s = 0; //soma
	for(int i = 0; i < n; i++) s += v[i];
	return(s/n);
}

float variancia (float* v, int n)
{
	float m = media(v, n);
	float s = 0; //soma
	for(int i = 0; i < n; i++) s+= pow((v[i] - m), 2);
	return (s/n);

}
float maior(float* v, int n)
{
	float m = v[0]; //maior valor = primeiro valor
	for (int i = 0; i < n; i++)
	{
		if(v[i] > m) m = v[i];
	}
	return(m);
}

float menor(float* v, int n)
{
	float m = v[0]; //menor valor = primeiro valor
	for (int i = 0; i < n; i++)
	{
		if(v[i] < m) m = v[i];
	}
	return(m);
}

int main(void)
{
	FILE* f = fopen("naturais.txt", "r+t");
	if(f == NULL)
	{
		printf("Nao foi possivel abrir o arquivo para leitura. \n");
		return (1);
	}
	
	float arr[1000]; //arr de 'array'
	int i = 0;
	
	fscanf(f, "%f", &arr[i]); 
	while(!feof(f)) //for(;!feof(f);)
	{
		i++;
		fscanf(f, "%f", &arr[i]);
	}
	
	fclose(f);
	
	printf("A media eh %f \n", media(arr, i));
	printf("A variancia dos valores eh %f \n", variancia(arr, i));
	printf("O maior valor eh %f \n", maior(arr, i));
	printf("O menor valor eh %f \n", menor(arr, i));
	return 0;
}
