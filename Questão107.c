/******************************************************************************
Pode-se calcular a área de um polígono a partir das coordenadas de
seus vértices utilizando a seguinte fórmula:
Área = soma (X(n)*Y(n+1) – X(n)*Y(n-1)) / 2 sendo que:
p/ n = 1, n-1 = N (número de vértices) p/ n = N, n+1 = 1 Escrever um programa
em C que receba o número de vértices N do usuário.
*******************************************************************************/

//Primeiro, o programa solicita ao usuário que digite o número de vértices do polígono. Em seguida, 
//cria-se uma matriz chamada "vertices" com "n" linhas e duas colunas. Cada linha dessa matriz irá armazenar
//as coordenadas de um vértice do polígono, sendo a primeira coluna correspondente à coordenada x e a segunda
//coluna correspondente à coordenada y.O programa então entra em um loop for que solicita ao usuário que digite as 
//coordenadas de cada vértice do polígono. As coordenadas são lidas do teclado e armazenadas na matriz "vertices".
//Após a leitura das coordenadas, o programa entra em outro loop for que calcula a área do polígono usando o método de Shoelace. 
//Esse método envolve o cálculo da soma dos produtos entre as coordenadas x e y de vértices adjacentes do polígono, 
//subtraindo a soma dos produtos entre as coordenadas x e y de vértices diagonais do polígono. Esse cálculo é feito para 
//todos os vértices do polígono, exceto o último, que é conectado ao primeiro. O resultado final é a área do polígono dividida por 2.
//Por fim, o programa imprime a área do polígono na tela com duas casas decimais de precisão.

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
