/* 
 * Descrição: Lista 03 - Questão 11
 * Aluno: Eduardo Santos de Castro
 * Matrícula: 514554
 * Data atual: 16/11/2021
*/

#include <stdio.h>

int main() {
  const int NUMBER = 5;

  printf("valor da constante: %d\n", NUMBER);

  scanf("%d", &NUMBER);

  printf("Valor trocado: %d\n", NUMBER);

	return 0;
}

/*
 * Podem ocorrer erros ao tentar trocar o valor de uma constante. 
 * Como o nome já diz, o valor deve permanecer o mesmo (constante) durante toda 
 * a execução do programa.
*/