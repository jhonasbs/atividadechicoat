/******************************************************************************
Fazer um programa de diálogo de login semelhante ao exercício 106,
com a diferença de que é possível cadastrar no máximo 10 nomes de usuário
e suas respectivas senhas (nomes de usuário repetidos devem ser
descartados). No diálogo de login, o programa deve testar se o usuário
fornecido existe e se a sua senha confere.
*******************************************************************************/
#include <stdio.h>
#include <string.h>

#define MAX_USERS 10
#define MAX_NAME_LENGTH 20
#define MAX_PASSWORD_LENGTH 20

struct user {
    char name[MAX_NAME_LENGTH];
    char password[MAX_PASSWORD_LENGTH];
};

int main() {
    struct user users[MAX_USERS];
    int num_users = 0;

    // Adiciona usuários e senhas 
    printf("Adicione até %d usuários e suas senhas correspondentes:\n", MAX_USERS);
    while (num_users < MAX_USERS) {
        char name[MAX_NAME_LENGTH];
        char password[MAX_PASSWORD_LENGTH];

        printf("Digite o nome do usuário %d (ou pressione Enter para terminar): ", num_users+1);
        fgets(name, MAX_NAME_LENGTH, stdin);

        if (strlen(name) == 1) { // usuário pressionou Enter
            break;
        }

        // Remove o caractere de nova linha do final do nome
        name[strlen(name)-1] = '\0';

        // Verifica se o nome de usuário já existe
        int i;
        for (i = 0; i < num_users; i++) {
            if (strcmp(name, users[i].name) == 0) {
                printf("Nome de usuário já existe.\n");
                break;
            }
        }

        if (i < num_users) { // nome de usuário já existe, tenta adicionar novamente
            continue;
        }

        // Lê a senha correspondente
        printf("Digite a senha para o usuário %s: ", name);
        fgets(password, MAX_PASSWORD_LENGTH, stdin);
        password[strlen(password)-1] = '\0';

        // Adiciona usuário e senha ao vetor de estruturas
        strncpy(users[num_users].name, name, MAX_NAME_LENGTH);
        strncpy(users[num_users].password, password, MAX_PASSWORD_LENGTH);
        num_users++;
    }

    // Faz o login
    printf("\nDigite o nome de usuário e a senha para fazer login.\n");
    while (1) {
        char name[MAX_NAME_LENGTH];
        char password[MAX_PASSWORD_LENGTH];

        printf("Nome de usuário: ");
        fgets(name, MAX_NAME_LENGTH, stdin);
        name[strlen(name)-1] = '\0';

        printf("Senha: ");
        fgets(password, MAX_PASSWORD_LENGTH, stdin);
        password[strlen(password)-1] = '\0';

        int i;
        for (i = 0; i < num_users; i++) {
            if (strcmp(name, users[i].name) == 0 && strcmp(password, users[i].password) == 0) {
                printf("Login bem sucedido.\n");
                return 0;
            }
        }

        printf("Nome de usuário ou senha incorreta. Tente novamente.\n");
    }

    return 0;
}
