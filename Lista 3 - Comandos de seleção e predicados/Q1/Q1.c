//Lista 3: Comandos de seleção e predicados. - PDS1
//Predicado - função que retorna verdadeiro ou falso

#include <stdio.h>
#include <stdbool.h>

float max (float a, float b, float c)
{
	if (a > b && a > c) return (a);
	else if (b > c) return (b);
	else return (c);
}

float min (float a, float b, float c)
{
	if (a < b && a < c) return (a);
	else if (b < c)	return (b);
	else return (c);
}

bool divisivel (int a, int b) //Bool - retorna verdadeiro ou falso - poderia ser int e return 0 e 1
{
	if (a%b == 0) return (true);
	else return (false); 
}

int main(void)
{
	float a, b, c;
	int x, y, z;
	
	printf ("Digite 3 números: \n");
	scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    
    //scanf("%f%f%f", &a, &b, &c);
	
	printf("1a - max: %g \n", max(a, b, c));
	printf("1b - min: %g \n", min(a, b, c));
	
	printf ("Digite 3 números inteiros: \n");
	scanf("%i", &x);
    scanf("%i", &y);
    scanf("%i", &z);
    
	//Questão 2a
	if (x%2 == 0) printf("2a - O número x é par \n"); //divisão por 2 sem resto
	else printf("2a - O número x é impar \n");
	
	//Questão 2b
	if (x >= y && x <= z) printf("2b e 2c - O número x está no intervalo [y z] \n");
	else printf("2b e 2c - O número está fora do intervalo [y z] \n"); // ou if (x < y || x > z)
	
	//Questão 3
	printf ("Digite o ano: ");
	scanf("%i", &x);
	if (divisivel(x, 400) || (divisivel(x,4) && divisivel(x,100))) printf("3 - O ano %i é bissexto \n", x);
	else printf("3 - O ano %i não é bissexto \n", x);
	
	return 0;
}

/*
bool par (int x)
{
	return (x%2 == 0);
}


int dentro (float x, float y, float z)
{
	return (x >= y && x <= z)
}

int fora (float x, float y, float z)
{
	return(!dentro(x, y, z)) //negação do dentro
}


 
*/

/* COM IDENTAÇÃO E ESCOPO { }

float max (float a, float b, float c)
{
	if (a >= b && a >= c)
	{
		return a;
	}
	else if (b >= a && b >= c)
	{
		return b;
	}
	else // if (c >= a && c >= b)
	{	
		return c;
	}
	
}

float min (float a, float b, float c)
{
	if (a <= b && a <= c)
	{
		return a;
	}
	else if (b <= a && b <= c)
	{
		return b;
	}
	else // if (c >= a && c >= b)
	{	
		return c;
	}
}

*/
