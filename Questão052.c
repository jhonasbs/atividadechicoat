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