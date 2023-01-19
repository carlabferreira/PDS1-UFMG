//Lista 4: Recursividade

#include <stdio.h>
#include <stdbool.h>

int fat (int n)
{
	if (n == 0) return (1);
	return (n * fat(n-1));
}

int mdc (int a, int b) //logica do mdc = dividir os numeros pelos numeros primos que eles sao multiplos (ate que so sejam divisiveis por eles mesmos(primo))
//valor do mdc = multiplicao desses numeros primos encontrados
{
    if(b == 0) return a;
    return mdc(b,a%b);
}

int mdc3 (int a, int b, int c) //Maneira como fiz a mdc de 2 para esse ficaria mais complicado
{
	if(b%a==0 && c%a == 0) return a;
    if(a%b==0 && c%b == 0) return b;
    if(a%c==0 && b%c == 0) return c;
    return mdc3(b,(a%b),(c%b));
}

int fib (int n) //retorna o n-�simo termo da s�rie de Fibonacci
{
	if (n <= 2) return (1); //O primeiro e o segundo termos da sequencia s�o 1
	else return (fib(n-1) + fib(n-2));	
}

int primo (int x, int n) //testa se um n�mero x � primo.
//so precisa checar com raiz de n -> empilha menos
{
	if(n == 1) return(1);	
	if(x%n == 0) return(0);
	return(primo(x, n-1));
	
}

int decrescente (int x, int n) //procedimento que escreve uma seq��ncia de inteiros menores que x e maiores que 0.
{
	if ((x-n) == 0)	return(0);
	else
	{
		printf("%i ", x-n);
		decrescente(x, n+1);
	}
}

int res (int a, int b) // retorna o resto da divisao entre a e b
{
	if(a - b < 0) return a;
	return(res(a - b, b));
	//return (a%b);
}


int form (int n, int i) //retorna o valor do somat�rio de i*i, com i variando de 1 at� n.
{
    if (i > n) return (0);
	else return(i*i + form(n, i+1));	
}


int mmc (int a, int b)
{
    if(b == 0) return a;
    return ((a*b)/(mdc(a,b)));
}

int div (int a, int b) // retorna o resultado da divisao inteira de a por b
{
	if (a < b) return 0;
    return (div(a-b, b) + 1);
}

float raiz (float x, float chute) //retorna a raiz quadrada de n (com precisao de 0.001).
//chutar e verificar se foi acima ou nao
{
	if((chute * chute) >= (x - 0.001) && (chute * chute) <= (x + 0.001)) return (chute); //verificando se esta no intervalo de precis�o pedido
	if(chute*chute > x) return (raiz(x, chute * 0.5)); //0.5 fator de encolhimento escolhido - numero entro zero e 1
	if(chute*chute < x) return (raiz(x, chute * 1.5));
}

int dig (int n) //retorna a soma dos digitos de um inteiro positivo n.
{
    if (n >=0 && n<=9) return (n); //quando tem apenas um digito
	else return((n%10) + dig((n-(n%10))/10));	
}


int my_exp (int k, int n) //retorna k^n
{
	if (n == 1) return (k);
	else return (k * my_exp (k, n - 1));	
} 


int crescente (int x, int n) //escreve em ordem crescente, todos os inteiros maiores que 0 e menores ou iguais a x.
{
	if (n > x) return(x);
	else
	{
		printf("%i ", n);
		crescente(x, n+1);
	}
}


int main (void)
{
	int a, b, c;
	
	printf("Digite um n�mero a: ");
	scanf("%i", &a);
	printf("Digite um n�mero b: ");
	scanf("%i", &b);
	printf("Digite um n�mero c: ");
	scanf("%i", &c);
	
	printf("1a - %i \n", fat(a));
	printf("1b - %i \n", mdc(a, b));
	printf("1c - %i \n", mdc3(a, b, c));
	printf("1d - %i \n", fib(a));
	printf("1e - %i \n", primo (a, a-1));
	
	printf("1f - ");
	decrescente(a, 0);
	printf("\n");
	
	printf("1g - %i \n", res(a, b));
	printf("1h - %i \n", form(a, 0));
	printf("1i - %i \n", mmc(a, b));
	printf("1j - %i \n", div (a, b));
	printf("1k - nao ha letra k na lista \n");
	printf("1l - %.3f \n", raiz((float)a, a/2));
	printf("1m - %i \n", dig(a));
	printf("1n - %i \n", my_exp(a, b));

	printf("1o - ");
	crescente(a, 1);
	printf("\n");

	return (0);
}
