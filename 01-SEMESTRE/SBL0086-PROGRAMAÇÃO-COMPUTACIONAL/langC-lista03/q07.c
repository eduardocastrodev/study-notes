/* 
 * Descrição: Lista 03 - Questão 07
 * Aluno: Eduardo Santos de Castro
 * Matrícula: 514554
 * Data atual: 16/11/2021
*/

#include <stdio.h>

int main(){
    int number[2];

    for (int i = 0; i <= 1; i++) {
      printf("Digite um numero: ");
      scanf(" %d", &number[i]);
    }
    
    printf("Ordem inversa: \n");
    for (int i = 1; i >= 0; i--) {
      printf("%d ", number[i]);
    }
    printf("\n");

    return 0;
}