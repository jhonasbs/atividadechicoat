/******************************************************************************
Faça um programa que calcule o desvio padrão de um vetor v, contendo n = 10
números, onde m é a média do vetor.
*******************************************************************************/
#include <stdio.h>
#include <math.h>
#define N 10

// além de definir uma constante N com valor 10 usando a diretiva #define.Em seguida, a função main() é declarada e 
//inicializa um vetor de inteiros chamado "vetor" com valores de 2 a 11, com 10 elementos.As variáveis "media" e "soma_quadrados"
//são inicializadas com valor 0, enquanto "desvio_padrao" é declarada sem valor inicial.A primeira parte do cálculo do desvio padrão 
//é realizada usando um loop for para percorrer o vetor e calcular a média dos valores armazenados nele. O resultado é armazenado na variável "media".
//A segunda parte do cálculo usa outro loop for para percorrer o vetor novamente e calcular a soma dos quadrados das diferenças entre cada valor e a 
//média calculada anteriormente. A soma é armazenada na variável "soma_quadrados".Por fim, o desvio padrão é calculado dividindo-se a "soma_quadrados"
//pelo número de elementos do vetor menos 1 (para corrigir o cálculo do desvio padrão de uma amostra em relação à população inteira), e em seguida calculando
//a raiz quadrada do resultado usando a função sqrt() da biblioteca math.h. O valor resultante é armazenado na variável "desvio_padrao".
//Por fim, o valor do desvio padrão é exibido na tela usando a função printf() da biblioteca stdio.h e o programa retorna 0 para indicar que foi executado com sucesso.

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