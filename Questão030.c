/******************************************************************************
Escreva um programa que lê um inteiro positivo e verifica se ele contém o dígito
3 em qualquer posição.
*******************************************************************************/
//Primeiramente crio duas variaveis peço para entrar com um numero qualquer e depois
//faço um while para que se o n1 for maior que zero ele verifique se o valor tem 3 na primeira casa
//se nao houver ele retorna o codigo adicionando 10 para que verifique na casa seguinte ate verificar as
// casas existentes se tem o digito 3.
#include <stdio.h>

main() {
    int num, n1;

    printf("\nQual o seu numero?\n");
    scanf("%d", &n1);

    while(n1 > 0) {
        num = n1 % 10;
        if(num == 3) {
            printf("Esse numero tem 3.\n");
            return 0;
        }
        n1 /= 10;
    }
    printf("Esse numero não tem 3.\n");
}