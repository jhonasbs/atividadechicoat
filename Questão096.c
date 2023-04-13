/******************************************************************************
. Considere um vetor A com 11 elementos onde A1 < A2 < … < A6 > A7 > A8
> … > A11, ou seja, está ordenado em ordem crescente até o sexto elemento,
e a partir desse elemento está ordenado em ordem decrescente. Dado o vetor
da questão anterior, proponha um algoritmo para ordenar os elementos.
*******************************************************************************/

//O programa começa declarando um vetor A com os 11 elementos descritos na questão anterior
//e chamando a função bubbleSort() para ordenar os subvetores crescente e decrescente. A função bubbleSort()
//é definida no início do programa e implementa o algoritmo Bubble Sort para ordenar um vetor de inteiros.
//Na função main(), a função bubbleSort() é chamada duas vezes, passando como argumentos o vetor A e o número 
//de elementos a serem ordenados em cada subvetor. Para ordenar o subvetor decrescente, é passado o endereço de 
//memória do elemento A[6], que marca o início do subvetor decrescente no vetor.
//Por fim, o programa imprime o vetor ordenado na tela, usando um loop for para percorrer todos os elementos do vetor.

#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int i, j;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int A[11] = {1, 2, 3, 4, 5, 6, 11, 10, 9, 8, 7};
    int i;

    // Ordena o subvetor crescente
    bubbleSort(A, 6);

    // Ordena o subvetor decrescente
    bubbleSort(A+6, 5);
    for (i = 0; i < 11; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}
