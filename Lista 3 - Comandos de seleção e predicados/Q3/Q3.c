//Lista 3: Comandos de seleção e predicados. - PDS1

#include <stdio.h>
#include <stdbool.h>

bool divisivel (int a, int b) //Bool - retorna verdadeiro ou falso - poderia ser int e return 0 e 1
{
	if (a%b == 0) return (true);
	else return (false); 
}

//Ano bissexto 
int main (void)
{
	int ano;
	printf("Digite um ano: ");
	scanf("%i", &ano);
	
	if (divisivel(ano, 400) || (divisivel(ano,4) && divisivel(ano,100))) printf("3 - O ano %i é bissexto \n", ano);
	else printf("3 - O ano %i não é bissexto \n", ano);
	
	

	return 0;
}

/* SEM A FUNÇÃO DIVISIVEL
	if (ano%400 == 0 || (ano%4 == 0 && ano%100 != 0)) printf("3 - O ano %i é bissexto \n", ano);
	else printf("3 - O ano %i não é bissexto \n", ano);

*/
