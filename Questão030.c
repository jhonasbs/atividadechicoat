/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

main() {
    int num, n1;
    printf("\nQual o seu numero?\n");
    scanf("%d", &n1);
    while(n1 > 0) {
        num = n1 % 10;
        if(num == 3) {
            printf("Esse numero tem 3.\n");
            return 0;
        }
        n1 /= 10;
    }
    printf("Esse numero não tem 3.\n");
}