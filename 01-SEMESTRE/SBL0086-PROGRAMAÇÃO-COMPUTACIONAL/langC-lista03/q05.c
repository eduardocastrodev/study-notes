/* 
 * Descrição: Lista 03 - Questão 05
 * Aluno: Eduardo Santos de Castro
 * Matrícula: 514554
 * Data atual: 16/11/2021
*/

#include <stdio.h>

int main(){
    double number=0.0;

    printf("Digite um número: ");
    scanf("%lf",&number);
    
    printf("O numero %.6lf em notacao cientifica fica %.4e\n", number, number);
    
    return 0;
}