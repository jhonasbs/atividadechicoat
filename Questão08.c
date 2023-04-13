/******************************************************************************
Fazer um programa que recebe duas notas parciais de um aluno (0 a 100) e
informa se ele está aprovado (média maior ou igual a 70), em exame final (média
entre 40 e 69) ou reprovado (média menor do que 40). Caso esteja em exame o
programa deve pedir a nota do exame (0 a 100) e informar se o aluno está
aprovado (média mais nota do exame maior ou igual a 100) ou reprovado (média
mais nota do exame menor do que 100).
*******************************************************************************/

#include <stdio.h>
int main()
//Primeiramente vou fazer a entrada das duas notas por esses scanf's e armazenar nas duas variaveis n1 e n2
{
    int n1, n2, media, nef;
    printf("\nQual a primeira nota? ");
    scanf("%d", &n1);

    printf("\nQual a segunda nota? ");
    scanf("%d", &n2);
//Logo Apos irei fazer a media dessas duas notas e vou verificar por meio do if se ela é superior a 70 para indicar aprovado
//no segundo if verificarei as notas menor que 40 para reprovado e por ultimo pego o que sobrou para colocar para prova final
//que seria de 70 a 40 e peço para entrar com mais uma nota da prova final.
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
