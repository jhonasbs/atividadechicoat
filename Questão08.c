/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
int main()
{
    int n1, n2, media, nef;
    printf("\nQual a primeira nota? ");
    scanf("%d", &n1);

    printf("\nQual a segunda nota? ");
    scanf("%d", &n2);

media = (n1 + n2) / 2;
    if(media >= 70){
        printf("Aprovado");
    }
    else if(media <= 40){
        printf("Reprovado");
    }
    else if(media < 70 && media > 40){
        printf("Voce foi para o exame final, \nQual sua nota do exame final?");
        scanf("%d", &nef);
    }
            if(nef >=100){
            printf("Aprovado no Exame Final");
        }
            else if (nef <= 99){
                printf("Reprovado no Exame Final");
            }
 return 0;     
}
