/******************************************************************************
Fazer um programa que receba 3 números do usuário, chame a função
e mostre os números ordenados.
*******************************************************************************/

//Esse código implementa uma função chamada ordenaNumeros que recebe três ponteiros para inteiros e os ordena em ordem crescente. 
//A função é chamada na função main, onde o usuário digita três números inteiros e em seguida, a função ordenaNumeros é chamada com os 
//endereços das variáveis que armazenam esses números. Depois de chamar a função, a função main imprime os números na ordem ordenada.
//A função ordenaNumeros funciona da seguinte maneira: ela compara os dois primeiros valores e os troca, se necessário, 
//para que o menor valor esteja armazenado na primeira variável (num1) e o maior valor esteja armazenado na segunda variável (num2). 
//Em seguida, a função compara o valor da segunda variável (num2) com o valor da terceira variável (num3) e os troca, se necessário, 
//para que o menor valor esteja armazenado em num2 e o maior valor em num3. Finalmente, a função compara novamente num1 e num2 e os troca,
//se necessário, para que o menor valor esteja armazenado em num1 e o maior valor em num2. Depois disso, as variáveis num1, num2 e num3 estarão 
//armazenando os três números digitados pelo usuário em ordem crescente.

#include <stdio.h>

void ordenaNumeros(int *num1, int *num2, int *num3);

int main() {
   int num1, num2, num3;

   printf("Digite o primeiro número: ");
   scanf("%d", &num1);
   printf("Digite o segundo número: ");
   scanf("%d", &num2);
   printf("Digite o terceiro número: ");
   scanf("%d", &num3);

   ordenaNumeros(&num1, &num2, &num3);

   printf("Números ordenados: %d, %d, %d\n", num1, num2, num3);

   return 0;
}

void ordenaNumeros(int *num1, int *num2, int *num3) {
   int temp;

   if (*num1 > *num2) {
      temp = *num1;
      *num1 = *num2;
      *num2 = temp;
   }
   if (*num2 > *num3) {
      temp = *num2;
      *num2 = *num3;
      *num3 = temp;
   }
   if (*num1 > *num2) {
      temp = *num1;
      *num1 = *num2;
      *num2 = temp;
   }
}
