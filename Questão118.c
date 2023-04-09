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
