/******************************************************************************
Leia um vetor com 20 números inteiros. Escreva os elementos do vetor
eliminando elementos repetidos.
*******************************************************************************/

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
