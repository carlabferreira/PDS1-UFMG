//Lista 2: Procedimentos e Funções - PDS1

//Arquivo para usar as funções
#include <stdio.h>
#include <math.h> // compilar com -lm 

float media(float a, float b, float c)
{
	return ((a + b + c) / 3.0);
}

float media_ponderada (float a, float b, float c)
{
	return ((3 * a) + (4 * b) + (5 * c) / 12 );
}

float perimetro (float r)
{	
	return (2 * M_PI * r);
}

float area_circulo (float r)
{
	return (M_PI * pow(r, 2));
}

float area_triangulo (float base, float altura)
{
	return (base * altura);
}

float area_caixa (float base, float largura, float altura)
{
	return (2 * base * largura) + (2 * altura * largura) + (2 * altura * base);
}

float volume_caixa (float base, float largura, float altura)
{
	return (base * largura * altura);
}

float area_cilindro (float r, float h) //2 area da base + area lateral
{
	return ((2 * (M_PI * pow(r, 2))) + ((2 * M_PI * r) * h));
}

float volume_cilindro (float r, float h) //area da base * altura
{
	return ((2 * (M_PI * pow(r, 2))) * h);
}

float hipotenusa (float b, float c) //a2 = b2 + c2
{
	return (sqrt(pow(b, 2) + pow(c, 2)));
}

float raiz_positiva(float a, float b, float c)
{
	return ((-b + sqrt((pow(b,2) - 4 * a * c))) / (2 * a));
	
	//(-b - sqrt((pow(b,2) - 4 * a * c))) / (2 * a) = raiz negativa
}

int main (void)
{
	float a, b, c;
	printf("Informe a, b e c\n");
	scanf("%f%f%f", &a, &b, &c);
	
	printf("a: %g \n", media(a, b, c));
	printf("b: %g \n", media_ponderada(a, b, c));
	printf("c: %g \n", perimetro(a));
	printf("d: %g \n", area_circulo(a));
	printf("e: %g \n", area_triangulo(b, c));
	printf("f: %g \n", area_caixa(a, b, c));
	printf("g: %g \n", volume_caixa(a, b, c));
	printf("h: %g \n", area_cilindro(a, b)); //variaveis??
	printf("i: %g \n", volume_cilindro (a, b)); //variavies??
	printf("j: %g \n", hipotenusa(b, c));
	printf("k: %g \n", raiz_positiva(a, b, c));
	
	
	return 0;
}
