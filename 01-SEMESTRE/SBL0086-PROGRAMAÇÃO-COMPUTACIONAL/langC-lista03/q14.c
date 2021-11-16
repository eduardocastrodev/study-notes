/* 
 * Descrição: Lista 03 - Questão 14
 * Aluno: Eduardo Santos de Castro
 * Matrícula: 514554
 * Data atual: 16/11/2021
*/

#include <stdio.h>

int main() {
  char c;
  int i;
  float f;

  printf("Digite um caracter: ");
  scanf(" %c", &c);
  printf("Digite um numero inteiro: ");
  scanf(" %d", &i);
  printf("Digite um numero real: ");
  scanf(" %f", &f);

  // OUTPUT
  printf("\n--> Espaços:\n%c %d %.2f\n", c, i, f);
  printf("\n--> Tabulações:\n%c \t%d \t%.2f\n", c, i, f);
  printf("\n--> Nova linha:\n%c \n%d \n%.2f\n", c, i, f);

	return 0;
}