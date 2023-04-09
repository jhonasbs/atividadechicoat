/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
    int anos = 0; // variável para contar os anos necessários
    int espigas = 1; // variável para contar o número de espigas em cada ano
    int ttl_graos = 0; // variável para contar o número total de grãos a cada ano

    while (ttl_graos < 100000000) { // executa enquanto o total de grãos for menor que 100 milhões (100 toneladas)
        int graos_germinados = espigas * 150 * 0.9; // calcula o número de grãos que germinarão em cada ano (descontando 10% que não germinam)
        ttl_graos += graos_germinados * 2; // adiciona o número total de grãos produzidos (cada grão que germina produz duas espigas)
        espigas = graos_germinados; // atualiza o número de espigas para o próximo ano
        anos++; // incrementa o número de anos
    }

    printf("Serão necessários %d anos para colher mais de 100 toneladas de milho.\n", anos);

    return 0;
}
