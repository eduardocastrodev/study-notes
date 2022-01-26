/* 
 * Descrição: Lista 03 - Questão 10
 * Aluno: Eduardo Santos de Castro
 * Matrícula: 514554
 * Data atual: 16/11/2021
*/

#include <stdio.h>

int main() {
	int day, month, year;

	do {
		printf("Dia: ");
		scanf("%d", &day);
	} while (day < 1 || day > 31);
	
	do {	
		printf("Mẽs: ");
		scanf("%d", &month);
	} while (month < 1 || month > 12);

	printf("Ano: ");
	scanf("%d", &year);

	printf("A data digitada foi %d/%d/%d!\n", day, month, year);

	return 0;
}