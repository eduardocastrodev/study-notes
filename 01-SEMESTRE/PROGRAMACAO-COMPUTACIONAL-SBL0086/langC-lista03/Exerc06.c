/* 
 * Descrição: Lista 03 - Questão 06
 * Aluno: Eduardo Santos de Castro
 * Matrícula: 514554
 * Data atual: 16/11/2021
*/

#include <stdio.h>

int main(){
    char c;

    printf("Digite um caractere: ");
    scanf(" %c",&c);
    
    printf("O caractere %c assume os seguintes valores: \n", c);
    printf("Em decimal: %d \n",c);
    printf("Em octal: %o \n",c);
    printf("Em hexadecimal: %x \n",c);
    
    return 0;
}