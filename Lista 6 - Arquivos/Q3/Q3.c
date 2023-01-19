/*
Escreva um programa em C++ que lê um arquivo com números naturais e gera dois arquivos:
“primos.txt” com aqueles números que são primos e “outros.txt” com aqueles números que não
são primos.
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


    FILE* f2 = fopen("primos.txt", "w+t");
    if(f2 == NULL)
    {
        printf("Nao foi possivel abrir o arquivo para escrita. \n");
        fclose(f1);
        return (2);
    }

    FILE* f3 = fopen("outros.txt", "w+t");
    if(f3 == NULL)
    {
        printf("Nao foi possivel abrir o arquivo para escrita. \n");
        fclose(f1);
        fclose(f2);
        return (3);
    }

    int i;
    int ehprimo;
    fscanf(f1, "%d", &i); //lendo um numero antes para poder usar o feof da forma estudada com feof

    while(!feof(f1))
    {
        ehprimo = primo(i);
        if (ehprimo) fprintf(f2, "%d\n", i);
        else fprintf(f3, "%d\n", i);
        fscanf(f1, "%d", &i);
    }
    fclose(f1);
    fclose(f2);
    fclose(f3);
    return (0);

}
