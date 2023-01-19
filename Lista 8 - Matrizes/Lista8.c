/*
Q1 - Escreva um programa em C++ que lê de um arquivo o número de linhas, o
número de colunas e todos os coeficientes de uma matriz

Q2 - Escreva uma função que recebe uma matriz quadrada de dimensão n e que
retorna a média dos elementos armazenados na matriz.

Q3 - Escreva uma função que recebe uma matriz quadrada A de dimensão n e que
transforma A em uma matriz identidade

Q4 - Escreva uma função que recebe uma matriz quadrada A de dimensão n e que
retorna uma matriz T que é a transposta de A.

Q5 - Escreva uma função que testa se uma matriz quadrada A de dimensão n é
simétrica. //Funcao que testa = predicado

Q6 - Escreva uma função que recebe duas matrizes quadradas A e B de dimensão n e
que retorna uma matriz S que é a soma de A e B.

Q7 - Escreva uma função que recebe duas matrizes quadradas A e B de dimensão n e
que retorna uma matriz P que é o produto de A e B.

*/

#include <stdbool.h>
#include <stdio.h>

// Q2
float media_matriz(int n, float mat[][100]) {
  float S = 0; // Soma de todos os elementos
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      S += mat[i][j];
    }
  }
  return (S / (n * n));
}
// Q3
void identidade(int n, float A[][100]) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i == j)
        A[i][j] = 1;
      else
        A[i][j] = 0;
    }
  }
}

// Q4
void transposta(int n, float A[][100], float T[][100]) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      T[i][j] = A[j][i];
    }
  }
}

// Q5
bool simetrica(int n, float A[][100]) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (A[i][j] != A[j][i])
        return (false); // basta um elemento diferente para que seja falso
    }
  }

  return (true);
}

// Q6
void soma_matriz(int n, float A[][100], float B[][100], float S[][100]) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      S[i][j] = A[i][j] + B[i][j];
    }
  }
}

// Q7
void mult_matriz(int n, float A[][100], float B[][100], float P[][100]) {
  float aux;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      P[i][j] = 0;
      for (int k = 0; k < n; k++) { aux += A[i][k] * B[k][j]; }

      P[i][j] = aux;
      aux = 0;
    }
  }
}

int main(void) {
  FILE *f = fopen("matriz.txt", "r+t");
  if (f == NULL) {
    printf("Erro ao abrir o arquivo \n");
    return (1);
  }
  int linhas, colunas;
  float mat[100][100];

  fscanf(f, "%d %d", &linhas,
         &colunas); // leitura de linhas e colunas do arquivo

  // Leitura da matriz do arquivo - Seria usado o FEOF se não soubesse o tamanho
  // da matriz
  for (int i = 0; i < linhas; i++) {
    for (int j = 0; j < colunas; j++) {
      fscanf(f, "%f", &mat[i][j]);
    }
  }

  float transp[100][100];
  float R[100][100];

  
  printf("Matriz mat: \n");
  for(int i = 0; i < linhas; i++)
  {
          for (int j = 0; j < colunas; j++)
          {
                  printf("%f ", mat[i][j]);
          }
          printf("\n");
  }

  /*
  printf("\nMatriz transposta inicial: \n");
  for(int i = 0; i < linhas; i++)
  {
          for (int j = 0; j < colunas; j++)
          {
                  printf("%f ", transp[i][j]);
          }
          printf("\n");
  }
  */

  transposta(linhas, mat, transp);

  
  printf("\nMatriz transposta final: \n");
  for(int i = 0; i < linhas; i++)
  {
          for (int j = 0; j < colunas; j++)
          {
                  printf("%f ", transp[i][j]);
          }
          printf("\n");
  }
  

  printf("\n A matriz eh simetrica? %d\n", simetrica(linhas, mat));
  mult_matriz(linhas, mat, transp, R);
  
  printf("\nMatriz final: \n");
  for(int i = 0; i < linhas; i++)
  {
          for (int j = 0; j < colunas; j++)
          {
                  printf("%f ", R[i][j]);
          }
          printf("\n");
  }
  
  return 0;
}
