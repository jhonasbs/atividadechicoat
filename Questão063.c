/******************************************************************************
Faça um programa que leia um vetor de 8 posições e, em seguida, leia também
dois valores X e Y quaisquer correspondentes a duas posições no vetor. Ao
final, seu programa deverá escrever a soma dos valores encontrados nas
respectivas posições X e Y .
*******************************************************************************/
//O programa declara um vetor vetor com 8 posições, e as variáveis inteiras i, x, y e soma. A variável i é utilizada
// para controlar um loop for que é utilizado para ler os valores do vetor.O loop for começa em 0 e vai até 7 (já que o vetor tem 8 posições)
//Em cada iteração do loop, o programa imprime uma mensagem para o usuário pedindo para digitar um número, e utiliza a função scanf() para ler o 
//número digitado e armazená-lo na posição correspondente do vetor.Após ler todos os valores do vetor, o programa pede para o usuário digitar as 
//posições x e y escolhidas. Para isso, o programa utiliza a função scanf() novamente para ler os valores de x e y.Em seguida, o programa calcula 
//a soma dos valores nas posições x e y do vetor e armazena o resultado na variável soma.Por fim, o programa imprime o resultado da soma na tela, 
//utilizando a função printf() e a string de formato "%d" para imprimir um valor inteiro.
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