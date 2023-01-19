/*
Escreva um programa em C++ que lê um arquivo com números reais (um número por linha) e
grava outro arquivo onde cada linha mostra o valor do respectivo número aplicado a função
f(x)= x2 - 5x + 1.
*/

#include <stdio.h>

float funcao (float x)
{
    x = (x * x) - (5 * x) + 1; //poderia ser pow(x, 2) também mas precisaria da math.h
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


    FILE* f2 = fopen("resultadosQ4.txt", "w+t");
    if(f2 == NULL)
    {
        printf("Nao foi possivel abrir o arquivo para escrita. \n");
        fclose(f1);
        return (2);
    }

    float i;
    fscanf(f1, "%f", &i); //lendo um numero antes para poder usar o feof da forma estudada com feof

    while(!feof(f1))
    {
        fprintf(f2, "%f %f\n", i, funcao(i)); //poderia escrever so zero ou um, vai de interpretacao
        fscanf(f1, "%f", &i);
    }
    fclose(f1);
    fclose(f2);
    return (0);

}
