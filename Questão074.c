/******************************************************************************
Leia um vetor com 20 números inteiros. Escreva os elementos do vetor
eliminando elementos repetidos.
*******************************************************************************/
//O programa declara um vetor vetor com 3 posições, e as variáveis inteiras i, j, k e repetido. A variável i é utilizada para 
//controlar um loop for que é utilizado para ler os valores do vetor.O loop for começa em 0 e vai até 2 (já que o vetor tem 3 posições). 
//Em cada iteração do loop, o programa imprime uma mensagem para o usuário pedindo para digitar um número, e utiliza a função scanf() para 
//ler o número digitado e armazená-lo na posição correspondente do vetor.Após ler todos os valores do vetor, o programa utiliza dois loops 
//for aninhados para verificar se há valores repetidos no vetor. O loop externo for é controlado pela variável i e o loop interno for é 
//controlado pela variável j. O loop interno for começa em i + 1, para evitar que se compare um elemento do vetor com ele mesmo.
//O programa utiliza uma variável booleana repetido para indicar se há valores repetidos. Caso o valor de vetor[i] seja igual ao valor de vetor[j],
//o programa define repetido como 1 e utiliza a instrução break para sair do loop interno. Se não houver valores repetidos, o programa imprime o 
//valor de vetor[i] utilizando a função printf().Por fim, o programa termina a execução e retorna 0.

#include <stdio.h>
int main()
{

int vetor[3];
int i = 0;
int j = 0;
int k = 0;
int repetido = 0;

for (i = 0; i < 3; i++){
	printf("Entre com o Numero:");
	scanf("%d", &vetor[i]);
}
 for(i = 0; i < 3; i++) {
      repetido = 0;
      for(j = i + 1; j < 3; j++) {
         if(vetor[i] == vetor[j]) {
            repetido = 1;
            break;
         }
      }
      if(!repetido) {
         printf("%d ", vetor[i]);
      }
   }
}
