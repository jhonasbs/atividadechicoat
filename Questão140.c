/******************************************************************************
Escreva um programa que declare um inteiro, um real e um char, e
ponteiros para inteiro, real, e char. Associe as variáveis aos ponteiros (use &).
Modifique os valores de cada variável usando os ponteiros. Imprima os valores
das variáveis antes e após a modificação.
*******************************************************************************/

//sse código cria três variáveis: "inteiro", "real" e "caracter", e três ponteiros: "ponteiro_int" que 
//aponta para o endereço de "inteiro", "ponteiro_real" que aponta para o endereço de "real" e "ponteiro_char" 
//que aponta para o endereço de "caracter".Em seguida, ele atribui os endereços das variáveis correspondentes
//a cada um dos ponteiros usando o operador "&".Então, o programa exibe os valores iniciais das variáveis 
//"inteiro", "real" e "caracter".Em seguida, o programa modifica os valores das variáveis através dos ponteiros,
//usando o operador de indireção "*", que permite acessar o valor armazenado na memória para a qual o ponteiro está apontando.
//Por fim, o programa exibe os novos valores das variáveis "inteiro", "real" e "caracter".
//Portanto, o código mostra um exemplo de como usar ponteiros para manipular variáveis em C.

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
