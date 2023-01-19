//Lista 5: Estruturas de Repetição

#include <stdio.h>

void fat (int n)
{
	int fat = 1;
	for (int i=1; i<= n; i++)
	{
		fat = fat * i;
	}
	printf("1a - %d \n", fat);
}

void mdc (int a, int b) //pode ir ate o menor, até a metade do maior ou !!
{
	int mdc = 1;
	int i = 1;
	do
	{
		if ((a%i == 0) && (b%i == 0)) mdc = i;
		i++;
	}
	while ((i <= a) && (i <= b));
	printf ("1b - %d \n", mdc);
}

void mdc3 (int a, int b, int c)
{
	int mdc = 1;
	int i = 1;
	do
	{
		if ((a%i == 0) && (b%i == 0) && (c%i == 0)) mdc = i;
		i++;
	}
	while ((i <= a) && (i <= b) && (i <= c));
	printf ("1c - %d \n", mdc);
}

void fib (int n) //retorna o n-ésimo termo da série de Fibonacci
{
	if (n < 3)
	{
		printf("1d - 1 \n");
	}
	else
	{
		int fib1 = 1, fib2 = 2, soma = 0;
		for (int i = 3; i < n; i++)
		{
			soma = fib1 + fib2;
			fib1 = fib2;
			fib2 = soma;
		}
		printf("1d - %d \n", soma);
	}

}

void primo (int x) //testa se um número x é primo.
//considera 1 como primo e aceita numeros negativos, não importante para PDS1
{
	int primo = 0;
	int i = 2;
	while (i < x)
	{
		if (x%i == 0) primo = 1;
		i++;
	}
	if (primo == 1) printf("1e - O numero nao e primo \n");
	if (primo == 0) printf("1e - O numero e primo \n");
}

void decrescente (int x) //procedimento que escreve uma seqüência de inteiros menores que x e maiores que 0.
{
	printf("1f - ");
	for (int i = x; i > 0; i--)
	{
		printf("%i ", i);
	}
	printf("\n");
}

void res (int a, int b) // retorna o resto da divisão entre a e b
{
	while(a / b != 1)
	{
		b = (a / b) * b;
	}
    printf("1g - %i \n", a - b);
}

void form (int n) //retorna o valor do somatório de i*i, com i variando de 1 até n.
{
	int resp = 0;
	for (int i = 1; i <= n; i++)
	{
		resp = resp + (i * i);
	}
	printf("1h - %d \n", resp);
}

void mmc (int a, int b)
{
	int aux = a;
    while(1) {
        if (aux % a == 0 && aux % b == 0) printf("1i - %i", aux);
        else aux += 1;
    }
}

void div (int a, int b) // retorna o resultado da divisão inteira de a por b
{
	int count = 0;
    while(a >= b) {
        a = a-b;
        ++count;
    }
    printf("1j - %i",count);
}

void raiz (float x) //retorna a raiz quadrada de n (com precisão de 0.001).
//chutar e verificar se foi acima ou não
{
	printf("1l - raiz de %f = %f", x, 0.0);
}

void dig (int n) //retorna a soma dos dígitos de um inteiro positivo n.
{
	int sum = 0;
    while(n != 0) {
        sum += n % 10;
        n /= 10;
    }
    printf("1m - %i", sum);
}	

void my_exp (int k, int n) //retorna k^n
{
	int res = 1;
	for (int i = 0; i < n; i++)
	{
		res = res * k;
	}
	printf("1n - %d \n", res);
} 


void crescente (int x) //escreve em ordem crescente, todos os inteiros maiores que 0 e menores ou iguais a x.
{
	printf("1o - ");
	for (int i = 1; i <= x; i++)
	{
		printf("%i ", i);
	}
	printf("\n");
}


int main(void)
{
	int a, b, c;
	
	printf("Digite um numero a: ");
	scanf("%i", &a);
	printf("Digite um numero b: ");
	scanf("%i", &b);
	printf("Digite um numero c: ");
	scanf("%i", &c);
	
	fat(a);
	mdc(a, b);
	mdc3(a, b, c);
	fib(a);
	primo(a);
	decrescente(a);
	res(a, b);
	form(a);
	mmc(a, b);
	div (a, b);
	printf("1k - nao ha letra k na lista \n");
	raiz((float)a);
	dig(a);
	my_exp(a, b);
	crescente(a);
	
	return 0;
}
