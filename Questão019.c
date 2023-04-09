#include <stdio.h>

int main (){
 
int n1, n2, n3, i, n;
n = 15;
n1 = 0;
n2 = 1;

printf ("\nSerie de Fibonacci:\n");
printf ("%d\n", n2);

for (i = 0; i < n; i++){
    n3 = n1 + n2;
    n1 = n2;
    n2 = n3;
    printf ("%d\n", n3);
    
}

}
