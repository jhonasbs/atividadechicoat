/******************************************************************************
Faça um programa onde o usuário digita 3 informações a respeito de
uma pessoa: Nome, endereço e telefone. Concatene essas três informações
em uma única string e faça uma contagem de quantas letras do alfabeto estão
presentes nesta string (considerando as redundâncias) e também de dígitos
numéricos. Os espaços e os caracteres de pontuação devem ser ignorados(as
funções de contagem já fazem isso).
• Dica: use as funções int isalpha(char cr) e int isdigit(char cr).
Exemplo:
Nome: Ana
Claudia
Endereço:
Rui
Barbosa,
234 Tel:
234-0912
*******************************************************************************/

//Neste código, as informações são lidas do usuário usando a função fgets e armazenadas nas variáveis nome,
//endereco e telefone. Em seguida, as informações são concatenadas em uma única string usando a função sprintf. 
//A variável letras é usada para contar o número de letras na string e a variável digitos é usada para contar o 
//número de dígitos na string. Para isso, o código percorre a string usando um loop for e, para cada caractere, 
//verifica se é uma letra ou um dígito usando as funções isalpha e isdigit, respectivamente. Por fim, o código 
//imprime na tela o número de letras e o número de dígitos encontrados na string.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char nome[50], endereco[50], telefone[15], info[115];
    int letras = 0, digitos = 0;

    printf("Digite o nome: ");
    fgets(nome, 50, stdin);
    printf("Digite o endereço: ");
    fgets(endereco, 50, stdin);
    printf("Digite o telefone: ");
    fgets(telefone, 15, stdin);

    sprintf(info, "%s%s%s", nome, endereco, telefone);

    for (int i = 0; i < strlen(info); i++) {
        if (isalpha(info[i])) {
            letras++;
        } else if (isdigit(info[i])) {
            digitos++;
        }
    }

    printf("Quantidade de letras: %d\n", letras);
    printf("Quantidade de dígitos: %d\n", digitos);

    return 0;
}
