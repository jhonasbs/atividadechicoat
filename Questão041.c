/******************************************************************************
Um agricultor possui 1 (uma) espiga de milho. Cada espiga tem 150 grãos, e
cada grão pesa 1g (um grama). Escreva um programa para determinar quantos
anos serão necessários para que o agricultor colha mais de cem toneladas de
milho (1T = 1000Kg, 1Kg =1000g), sendo que:
*******************************************************************************/
// primeiro criei 3 variaveis, a primeira para contar os anos necessarios, a segunda pra contar o numero de espigas em cada ano
//a terceira para contar o numero total de grãos a cada ano, depois criei um while reconhendo se o total de grao a cada ano e menor que 100 milhões
//se for ele calcula o numero de grão que ja podem ser colhidos (descontando 10% dos que não podem ser colhidos),adiciona o numero total de grão 
//produzidos cada grão colhido produz 2 espigas,depois eu adiciono o valor dos graos_colhidos nas espigas e adiciono o numero de anos no final.
#include <stdio.h>

int main() {
    int anos = 0; 
    int espigas = 1;
    int ttl_graos = 0; 

    while (ttl_graos < 100000000) {
        int graos_colhidos = espigas * 150 * 0.9; 
        ttl_graos += graos_colhidos * 2; 
        espigas = graos_colhidos;
        anos++;
    }

    printf("Serão necessários %d anos para colher mais de 100 toneladas de milho.\n", anos);

    return 0;
}
