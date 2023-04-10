/******************************************************************************
Fazer um programa que receba uma string de no máximo 20 caracteres
do usuário e mostre o conteúdo desta string de forma invertida
*******************************************************************************/
#include <stdio.h>

int main() {
    char str[21];
    int i, len;

    printf("Digite uma string de no máximo 20 caracteres: ");
    scanf("%20s", str);

    for (len = 0; str[len] != '\0'; len++);

    printf("A string invertida é: ");
    for (i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}