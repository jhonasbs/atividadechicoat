/******************************************************************************
Fazer um programa para mostrar todos os números perfeitos entre 1 e 100.
Número perfeito é todo número inteiro cuja soma dos seus divisores é igual ao
dobro do próprio número.
*******************************************************************************/
#include <stdio.h>
//primeiramente declarei 3 variaveis e depois criei um for onde ele percorre os numeros de 1 a 100
//depois fiz um for para ele verificar os divisores de j e armazena em sum e depois verificar com if 
//se o numero e igual ao divisor incial.

int main() {
    int i, j, sum;
    
    printf("Numeros perfeitos entre 1 e 100:\n");
    
    for (i = 1; i <= 100; i++) {
        sum = 0;
        
        for (j = 1; j < i; j++) {
            if (i % j == 0) {
                sum += j;
            }
        }
        
        if (sum == i) {
            printf("%d\n", i);
        }
    }
    
    return 0;
}
