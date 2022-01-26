/**
 * Arquivo: Exerc01
 * Autor: Eduardo Castro (eduardoscastro@alu.ufc.br)
 * Data: 2022-01-22
 * Descrição: 
 * Elabore algoritmos em C para ler uma matriz de inteiros N x N e:
    a. Mostrar cada elemento da matriz;
    b. Calcular e mostrar a soma dos elementos da matriz;
    c. Calcular e mostrar o maior e o menor elemento da matriz;
    d. Exibir cada elemento cujo valor seja maior que 50;
    e. Exibir cada elemento cujo valor seja par;
    f. Calcular e exibir a quantidade de elementos pares da matriz.
 */

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  int n;
  printf("Sendo uma matriz NxN, digite o valor para N: ");
  scanf("%d", &n);

  int N[n][n], i, j;
  int maior, menor, soma=0, pares=0;

  // Inserindo valores randômicos
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      N[i][j] = (rand() % 100);
    }
  }

  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) { 
      // Calculando a soma
      soma += N[i][j];

      // Maior ou menor
      if (N[i][j] == N[0][0]) {
        maior = N[i][j];
        menor = N[i][j];
      } else {
        if (maior < N[i][j]) maior = N[i][j];
        if (menor > N[i][j]) menor = N[i][j];
      }
      
      // Calculo de Elementos Pares
       pares++;
    }
  }

  // Imprimir elementos
  printf("A representação da matriz é: \n");
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      printf("%d ", N[i][j]);
    }
    printf("\n");
  }

  // Exibir a Soma, Maior e Menor
  printf("A soma de todos os elementos é: %d\n", soma);
  printf("O maior elemento é: %d\n", maior);
  printf("O menor elemento é: %d\n", menor);

  // Exibir Maiores que 50
  printf("Os elementos maiores que 50 são: \n");
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      if (N[i][j] > 50) printf("%d ", N[i][j]);
    }
  }
  printf("\n");

  // Exibir Pares
  printf("Os elementos pares são: \n");
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      if (N[i][j] % 2 == 0) printf("%d ", N[i][j]);
    }
  }

  printf("\n\n");
  return 0;
}