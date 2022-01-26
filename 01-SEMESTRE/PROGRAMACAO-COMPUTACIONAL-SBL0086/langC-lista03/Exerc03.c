/* 
 * Descrição: Lista 03 - Questão 03
 * Aluno: Eduardo Santos de Castro
 * Matrícula: 514554
 * Data atual: 16/11/2021
*/

#include <stdio.h>

int main() {
  int number;

  printf("Digite um número: ");
  scanf("%d", &number);

  printf("O valor lido foi %f. \n", number);

  return 0;
}

/*
 * Como visto em aulas anteriores, os tipos de dados representam o tamanho dos
 * espaços alocados na memória. Ao tentar imprimir uma variável incorretamente,
 * ocorre um problema de incompatibilidade.
*/