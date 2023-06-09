/******************************************************************************
Faça um programa para corrigir uma prova com 10 questões de múltipla
escolha (a, b, c, d ou e), em uma turma com 3 alunos. Cada questão vale 1
ponto. Leia o gabarito, e para cada aluno leia sua matrícula (número inteiro) e
suas respostas. Calcule e escreva: Para cada aluno, escreva sua matrícula, suas
respostas, e sua nota. O percentual de aprovação, assumindo média 7.0.
*******************************************************************************/

//O código começa declarando um array de caracteres chamado gabarito com tamanho 10 e três arrays de inteiros 
//chamados matricula, nota e um array de caracteres chamado respostas. As variáveis i e j são usadas para iterar pelos loops.
//A primeira parte do programa lê as respostas do gabarito e armazena cada resposta no array gabarito. Em seguida, o programa
//entra em um loop que lê a matrícula de cada aluno, em seguida, lê as respostas de cada aluno e compara com as respostas do gabarito.
//A nota do aluno é calculada somando 1 para cada resposta correta e armazenada no array nota. O loop continua até que as respostas 
//de todos os alunos tenham sido lidas.Após calcular as notas dos alunos, o programa imprime as informações de cada aluno, incluindo matrícula,
//respostas e nota. A média da turma e o percentual de aprovação são calculados e impressos na tela junto com a mensagem de aprovação ou reprovação da turma.

#include <stdio.h>

int main() {
    char gabarito[10];
    int matricula[3], nota[3], i, j;

    printf("Digite as respostas do gabarito: ");
    for(i = 0; i < 10; i++) {
        scanf(" %c", &gabarito[i]);
    }
    for(i = 0; i < 3; i++) {
        nota[i] = 0;

        printf("Digite a matricula do aluno %d: ", i+1);
        scanf("%d", &matricula[i]);

        char respostas[10];
        printf("Digite as respostas do aluno %d: ", i+1);
        for(j = 0; j < 10; j++) {
            scanf(" %c", &respostas[j]);

            if(respostas[j] == gabarito[j]) {
                nota[i]++;
            }
        }
    }
    printf("\n");
    
    for(i = 0; i < 3; i++) {
        printf("Aluno %d\n", i+1);
        printf("Matricula: %d\n", matricula[i]);
        printf("Respostas: ");
        for(j = 0; j < 10; j++) {
            printf("%c ", respostas[j]);
        }
        printf("\n");
        printf("Nota: %d\n\n", nota[i]);
    }

    float media = (nota[0] + nota[1] + nota[2]) / 3.0;
    float percentual_aprovacao = (media / 10.0) * 100;

    printf("Percentual de aprovacao: %.2f%%\n", percentual_aprovacao);

    if(media >= 7.0) {
        printf("Turma aprovada!\n");
    } else {
        printf("Turma reprovada!\n");
    }
    return 0;
}
