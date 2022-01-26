/* 
 * Descrição: Lista 03 - Questão 13
 * Aluno: Eduardo Santos de Castro
 * Matrícula: 514554
 * Data atual: 16/11/2021
*/

#include <stdio.h>

int main() {
  char c;

  printf("Digite um caracter: ");
  scanf(" %c", &c);

  for (int i = 0; i < 3; i++) {
    printf("%c\n", c);
  }  

	return 0;
}