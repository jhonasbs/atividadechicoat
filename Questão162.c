/******************************************************************************
Escreva uma função que retorna o maior valor de um array de tamanho
N. Escreva um programa que leia N valores inteiros, imprime o array com k
elementos por linha, e o maior elemento. O valor de k também deve ser
fornecido pelo usuário.
*******************************************************************************/

//Esse código possui duas funções. A função maior_valor recebe um array de inteiros arr e o tamanho do array n como argumentos, e retorna o maior valor contido no array.
//Na função main, o usuário é solicitado a digitar o tamanho do array n, seguido dos valores do array. Em seguida, 
//o usuário é solicitado a digitar o valor de k. O array digitado é impresso na tela, com quebras de linha a cada k elementos.
//Por fim, é impresso na tela o maior valor contido no array, utilizando a função maior_valor.

#include <stdio.h>

int maior_valor(int arr[], int n) {
    int maior = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maior) {
            maior = arr[i];
        }
    }
    return maior;
}

int main() {
    int n, k;
    printf("Digite o tamanho do array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Digite os valores do array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Digite o valor de k: ");
    scanf("%d", &k);
    printf("Array digitado:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
        if ((i+1) % k == 0) {
            printf("\n");
        }
    }
    printf("\nMaior valor: %d\n", maior_valor(arr, n));
    return 0;
}
