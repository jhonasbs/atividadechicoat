/******************************************************************************
Faça um programa que leia um vetor de 8 posições e, em seguida, leia também
dois valores X e Y quaisquer correspondentes a duas posições no vetor. Ao
final, seu programa deverá escrever a soma dos valores encontrados nas
respectivas posições X e Y .
*******************************************************************************/

#include <stdio.h>
int main()
{

int vetor[8];
int i = 0;
int x = 0;
int y = 0;
int soma;
 
for (i = 0; i < 8; i++){
	printf("Entre com o Numero:");
	scanf("%d", &vetor[i]);
}
printf("Qual a Posição escolhida?");
scanf("%d",&x);

printf("Qual a Posição escolhida?");
scanf("%d",&y);

soma = vetor[x] + vetor[y];

printf("O total:%d",soma);
}