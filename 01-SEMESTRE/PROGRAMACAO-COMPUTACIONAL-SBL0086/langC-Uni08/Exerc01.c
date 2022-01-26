/**
 * Arquivo: Exerc01;
 * Autor: Eduardo Castro (eduardoscastro@alu.ufc.br);
 * Data: 2022-01-22;
 * Descrição:
 * Ler um vetor Q de 20 posições (aceitar somente números positivos). Escrever a
 * seguir o valor do maior elemento de Q e a respectiva posição que ele ocupa no vetor.
 */

#include <stdio.h>

int main() {
  int Q[21], i, maior, menor;

  for (i = 0; i < 20; i++) {
    do { 
      printf("Digite o %dº valor: ", (i+1));
      scanf("%d", &Q[i]);
      if (Q[i] < 0) printf("<< ERRO >> -- Apenas valores positivos sao aceitos, digite novamente!\n");
    } while ((Q[i] < 0));
  }

  for (i = 0; i < 20; i++) {
    if (i == 0) {
      maior = Q[i];
      menor = Q[i];
    } else {
      if (Q[i] > maior) {
        maior = Q[i];
      }

      if (Q[i] < menor) {
        menor = Q[i];
      }
    }
  }

  printf("O maior elemento de Q e: %d\n", maior);
  printf("O menor elemento de Q e: %d\n", menor);

  return 0;
}
