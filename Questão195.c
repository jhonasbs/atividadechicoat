/******************************************************************************
Fazer um programa que receba uma string de no máximo 20 caracteres
do usuário e mostre o conteúdo desta string de forma invertida
*******************************************************************************/

//Esse código lê uma string de no máximo 20 caracteres digitada pelo usuário e imprime a string invertida na tela.

//A função main começa declarando um array de caracteres str com tamanho 21, o que permite armazenar uma string de no máximo 20 caracteres
//(mais um caractere nulo de terminação). Em seguida, são declaradas duas variáveis inteiras i e len.
//Depois, o programa pede que o usuário digite uma string de no máximo 20 caracteres usando a função scanf e armazena a string no array str.
//A variável len é inicializada como zero e, em seguida, um loop for é usado para percorrer cada caractere da string até encontrar o 
//caractere nulo de terminação, incrementando len em cada iteração. Isso é feito para determinar o comprimento da string.
//Finalmente, é impressa na tela a string invertida, percorrendo a string de trás para frente usando outro loop for que começa no índice 
//len - 1 (último caractere da string) e termina no índice 0 (primeiro caractere da string), imprimindo cada caractere na tela.

#include <stdio.h>

int main() {
    char str[21];
    int i, len;

    printf("Digite uma string de no máximo 20 caracteres: ");
    scanf("%20s", str);

    for (len = 0; str[len] != '\0'; len++);

    printf("A string invertida é: ");
    for (i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}