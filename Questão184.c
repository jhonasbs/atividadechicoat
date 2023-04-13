/******************************************************************************
Faça um programa que dado 2 palavras, determine:
a) Se as palavras são iguais;
b) Caso as palavras sejam diferentes, qual delas tem maior comprimento (não
esquecer a possibilidade de existirem palavras diferentes de mesmo
tamanho);
c) Verifique se a segunda palavra é uma sub string da primeira:
o Exemplo: Palavra 1= casamento
o Palavra 2 = casa
*******************************************************************************/

//Este programa solicita ao usuário que insira duas palavras e, em seguida, compara essas palavras. 
//Ele usa a função strlen() da biblioteca string.h para obter o comprimento de cada palavra e a função strcmp() para comparar as palavras.
//Se as palavras forem iguais, o programa imprime "As palavras são iguais!" e encerra a execução. Caso contrário, 
//ele informa que as palavras são diferentes e, em seguida, compara os comprimentos das palavras.
//Se as palavras tiverem o mesmo comprimento, o programa imprime "As palavras têm o mesmo comprimento.". Caso contrário, ele informa qual palavra é maior.
//Em seguida, o programa verifica se a segunda palavra é uma substring da primeira palavra, usando um loop for aninhado. O loop externo itera através da primeira 
//palavra enquanto o loop interno itera através da segunda palavra, comparando os caracteres em cada posição. Se houver uma correspondência completa entre as duas
//palavras, o programa imprime "A segunda palavra é uma substring da primeira." e sai do loop.
//Se a segunda palavra não for uma substring da primeira palavra, o programa imprime "A segunda palavra não é uma substring da primeira.".

#include <stdio.h>
#include <string.h>

int main() {
  char palavra1[100], palavra2[100];
  int tam1, tam2, i, j;

  printf("Digite a primeira palavra: ");
  scanf("%s", palavra1);

  printf("Digite a segunda palavra: ");
  scanf("%s", palavra2);

  tam1 = strlen(palavra1);
  tam2 = strlen(palavra2);

  if (strcmp(palavra1, palavra2) == 0) {
    printf("As palavras sao iguais!\n");
  } else {
    printf("As palavras sao diferentes!\n");
    if (tam1 == tam2) {
      printf("As palavras tem o mesmo comprimento.\n");
    } else if (tam1 > tam2) {
      printf("A primeira palavra tem maior comprimento.\n");
    } else {
      printf("A segunda palavra tem maior comprimento.\n");
    }
    for (i = 0; i <= tam1 - tam2; i++) {
      for (j = 0; j < tam2; j++) {
        if (palavra1[i+j] != palavra2[j]) {
          break;
        }
      }
      if (j == tam2) {
        printf("A segunda palavra e uma sub string da primeira.\n");
        break;
      }
    }
    if (j != tam2) {
      printf("A segunda palavra nao e uma sub string da primeira.\n");
    }
  }
  return 0;
}
