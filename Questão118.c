/******************************************************************************
Leia uma matriz 5 x 5. Leia também um valor X. O programa deverá fazer uma
busca desse valor na matriz e, ao final, escrever a localização (linha e coluna)
ou uma mensagem de "não encontrado”.
*******************************************************************************/

//O programa começa pedindo ao usuário que digite os elementos da matriz, lendo cada elemento do teclado
//e armazenando-o na matriz. Em seguida, o programa solicita que o usuário digite o valor a ser buscado (x).
//Depois, o programa entra em um loop for duplo que percorre cada elemento da matriz. Se um elemento é igual a x,
//o programa informa ao usuário que o valor x foi encontrado na linha i e coluna j. A variável "encontrou" 
//é setada como 1 para indicar que o valor foi encontrado e os loops são encerrados.Se o valor x não é encontrado 
//em nenhum elemento da matriz, o programa informa ao usuário que o valor não foi encontrado.Por fim, o programa 
//retorna 0 indicando que a execução foi concluída sem erros.

#include <stdio.h>

int main() {
    int matriz[5][5], x, i, j;
    int encontrou = 0;

    printf("Digite os elementos da matriz:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Digite o valor a ser buscado: ");
    scanf("%d", &x);

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (matriz[i][j] == x) {
                printf("O valor %d foi encontrado na linha %d e coluna %d.\n", x, i, j);
                encontrou = 1;
                break;
            }
        }
        if (encontrou) {
            break;
        }
    }

    if (!encontrou) {
        printf("O valor %d não foi encontrado na matriz.\n", x);
    }

    return 0;
}
