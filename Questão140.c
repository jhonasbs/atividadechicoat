/******************************************************************************
Escreva um programa que declare um inteiro, um real e um char, e
ponteiros para inteiro, real, e char. Associe as variáveis aos ponteiros (use &).
Modifique os valores de cada variável usando os ponteiros. Imprima os valores
das variáveis antes e após a modificação.
*******************************************************************************/
#include <stdio.h>

int main() {
    int inteiro = 10, *ponteiro_int;
    float real = 3.14, *ponteiro_real;
    char caracter = 'a', *ponteiro_char;

    ponteiro_int = &inteiro;
    ponteiro_real = &real;
    ponteiro_char = &caracter;

    printf("Valores iniciais:\n");
    printf("inteiro: %d\n", inteiro);
    printf("real: %.2f\n", real);
    printf("caracter: %c\n", caracter);

    *ponteiro_int = 20;
    *ponteiro_real = 2.71;
    *ponteiro_char = 'b';

    printf("Valores modificados:\n");
    printf("inteiro: %d\n", inteiro);
    printf("real: %.2f\n", real);
    printf("caracter: %c\n", caracter);

    return 0;
}
