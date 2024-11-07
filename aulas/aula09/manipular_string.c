#include <stdio.h>
#include <string.h>

int main () {

 char primeiro_nome[20];
    printf("Entre com o seu primeiro nome: ");
    scanf("%s", primeiro_nome);

    char ultimo_nome[20];
    printf("Entre com o seu ultimo nome: ");
    scanf("%s", ultimo_nome);

    char nome[40];

    // nome = primeiro_nome 
    strcpy(nome, primeiro_nome);
    printf("Seu nome eh '%s'\n", nome);
    
    // nome = nome + ultimo_nome;
    strcat(nome, " ");
    strcat(nome, ultimo_nome);
    printf("Seu nome eh '%s'\n", nome);

    //primeiro_nome == ultimo_nome;
    if (strcmp(primeiro_nome, ultimo_nome) < 0) {
        printf("A ordem eh %s %s", primeiro_nome, ultimo_nome);
    } else {
        printf("A ordem eh %s %s", ultimo_nome, primeiro_nome);
    }
    
    // quantos caracteres tem na string
    printf("O nome '%s' tem %i caracteres\n", nome, strlen(nome));

    // procurar pelo nome Silva
    if (strstr(nome, "Silva")) {
        printf("Sou da familia Silva!\n");
    } else {
        printf("Nao sou da familia Silva\n");
    }

    // preencher uma string
    memset(nome, 'a', 10);
    printf("Seu nome eh '%s'\n", nome);
    memset(nome, 'b', 20);
    printf("Seu nome eh '%s'\n", nome);
    memset(nome, 0, sizeof(nome));
    printf("Seu nome eh '%s'\n", nome);


    return 0;
}