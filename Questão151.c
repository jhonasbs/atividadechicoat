/******************************************************************************
Faça um programa que leia três valores inteiros e chame uma função
que receba estes 3 valores de entrada e retorne eles ordenados, ou seja, o
menor valor na primeira variável, o segundo menor valor na variável do meio,
e o maior valor na última variável. A função deve retornar o valor 1 se os três
valores forem iguais e 0 se existirem valores diferentes. Exibir os valores
ordenados na tela.
*******************************************************************************/

//Esse programa tem uma função chamada "ordena_valores" que recebe três ponteiros para inteiros como argumentos. 
//Se os três valores apontados por esses ponteiros forem iguais, a função retorna 1. Caso contrário, a função ordena os valores em ordem crescente e retorna 0.
//Na função principal (main), o programa solicita ao usuário que digite três valores inteiros. Em seguida, 
//a função "ordena_valores" é chamada, passando os endereços desses valores como argumentos. Se a função retornar 1, 
//o programa informa que os valores são iguais. Caso contrário, o programa exibe os valores ordenados e informa que eles são diferentes.

#include <stdio.h>

int ordena_valores(int *a, int *b, int *c) {
    if (*a == *b && *b == *c) { // Se todos os valores forem iguais
        return 1;
    } else { // Senão, ordena os valores
        int aux;
        if (*a > *b) {
            aux = *a;
            *a = *b;
            *b = aux;
        }
        if (*a > *c) {
            aux = *a;
            *a = *c;
            *c = aux;
        }
        if (*b > *c) {
            aux = *b;
            *b = *c;
            *c = aux;
        }
        return 0;
    }
}

int main() {
    int a, b, c;

    printf("Digite três valores inteiros: ");
    scanf("%d %d %d", &a, &b, &c);

    int sao_iguais = ordena_valores(&a, &b, &c);

    printf("Valores ordenados: %d %d %d\n", a, b, c);

    if (sao_iguais) {
        printf("Os valores são iguais.\n");
    } else {
        printf("Os valores são diferentes.\n");
    }

    return 0;
}
