/* 
 * Descrição: Lista 03 - Questão 09
 * Aluno: Eduardo Santos de Castro
 * Matrícula: 514554
 * Data atual: 16/11/2021
*/

#include <stdio.h>

int main() {
	float number[2];

	for (int i = 0; i <= 1; i++) {
		printf("Digite o %dº numero: ", (i + 1));
		scanf(" %f", &number[i]);
	}

	for (int i = 1; i >= 0; i--) {
		printf("O %dº numero foi: %.2f\n", (i + 1), number[i]);
	}

	return 0;
}