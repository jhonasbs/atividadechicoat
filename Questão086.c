/******************************************************************************
Leia 10 números inteiros e armazene em um vetor. Em seguida escreva os
elementos que são primos e suas respectivas posições no vetor
*******************************************************************************/
//Neste código, a função eh_primo recebe um número inteiro e retorna 1 se o número for primo e 0 caso contrário.
//No main, o vetor vet é criado e preenchido com os 10 números digitados pelo usuário. Em seguida, 
//o código percorre o vetor e chama a função eh_primo para verificar se cada elemento é primo ou não.
//Se o elemento for primo, o número e sua posição no vetor são impressos na tela.

#include <stdio.h>

int eh_primo(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int vet[10];

    for (int i = 0; i < 10; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &vet[i]);
    }

    printf("Números primos no vetor:\n");
    for (int i = 0; i < 10; i++) {
        if (eh_primo(vet[i])) {
            printf("%d na posição %d\n", vet[i], i);
        }
    }
    return 0;
}
