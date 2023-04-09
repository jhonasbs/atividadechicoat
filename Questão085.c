#include <stdio.h>
#include <math.h>
#define N 10

int main() {
    int vetor[N] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    double media = 0, soma_quadrados = 0, desvio_padrao;
    int i;

    for (i = 0; i < N; i++) {
        media += vetor[i];
    }
    media /= N;

    for (i = 0; i < N; i++) {
        soma_quadrados += pow(vetor[i] - media, 2);
    }

    desvio_padrao = sqrt(soma_quadrados / (N - 1));

    printf("O desvio padrão do vetor v é: %lf\n", desvio_padrao);

    return 0;
}
