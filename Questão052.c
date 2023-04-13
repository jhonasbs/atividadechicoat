/******************************************************************************
Escreva a função para cálculo do N-ésimo termo da série de Fibonacci
utilizando recursividade.
*******************************************************************************/

//A lógica por trás dessa função é simples: se n for 0 ou 1, retornamos n (porque esses são os 
//primeiros dois termos da série de Fibonacci). Caso contrário, recursivamente calculamos o (n-1)-ésimo e o (n-2)-ésimo 
//termos e somamos esses dois valores para obter o n-ésimo termo.
#include <stdio.h>

int fibonacci(int n) {
  int num;
  
  if (n == 1) {
    return(1);
  }
  
  if (n == 2) {
    return(1);
  }
  
  num = fibonacci(n-1) + fibonacci(n-2);
  return(num);
}

int main() {
  int n,i;
  
  printf("Digite o numero de termos da sequencia: ");
  scanf("%d", &n);
  
  while(n <= 0) {
    printf("Numero incorreto. Digite o numero de termos da sequencia: ");
    scanf("%d", &n);
  }
  
  for (i = 1; i <= n; i++) {
    printf("%d ", fibonacci(i));
  }
  printf("\n");
  return(0);
}