/******************************************************************************
Pode-se calcular a área de um polígono a partir das coordenadas de
seus vértices utilizando a seguinte fórmula:
Área = soma (X(n)*Y(n+1) – X(n)*Y(n-1)) / 2 sendo que:
p/ n = 1, n-1 = N (número de vértices) p/ n = N, n+1 = 1 Escrever um programa
em C que receba o número de vértices N do usuário.

*******************************************************************************/
#include <stdio.h>

int main() {
    int n, i;
    float x, y, area = 0;
    
    printf("Digite o número de vértices do polígono: ");
    scanf("%d", &n);
    
    float vertices[n][2]; 
    
    printf("Digite as coordenadas dos vértices do polígono:\n");
    for (i = 0; i < n; i++) {
        printf("Vértice %d: ", i+1);
        scanf("%f %f", &x, &y);
        vertices[i][0] = x; 
        vertices[i][1] = y; 
    }
    
    for (i = 0; i < n; i++) {
        if (i == n-1) {
            area += vertices[i][0] * vertices[0][1] - vertices[0][0] * vertices[i][1];
        } else { 
            area += vertices[i][0] * vertices[i+1][1] - vertices[i+1][0] * vertices[i][1];
        }
    }
    
    area = area / 2;
    
    printf("A área do polígono é: %.2f\n", area);
    
    return 0;
}
