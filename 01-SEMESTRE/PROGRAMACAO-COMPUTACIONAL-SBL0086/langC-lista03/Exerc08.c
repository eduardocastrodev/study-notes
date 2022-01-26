/* 
 * Descrição: Lista 03 - Questão 08
 * Aluno: Eduardo Santos de Castro
 * Matrícula: 514554
 * Data atual: 16/11/2021
*/

#include <stdio.h>

int main(){
    int x, y;

    printf("Digite um numero: ");
    scanf(" %d", &x);

    printf("Digite outro numero: ");
    scanf(" %d", &y);

    printf("Ordem da digitação: \n");
    printf(" x=%d, y=%d\n", x, y);

    // Troca de valores forma 1
    x= x + y;
    y= x - y;
    x= x - y;

    // Troca de valores forma 2
    // x = (x * y);
    // y = x / y;
    // x = x / y;

    printf("Ordem inversa: \n");
    printf(" x=%d, y=%d\n", x, y);

    return 0;
}