#include <stdio.h>
#include <string.h>

int main(){
    char primeiro_nome[20];
    printf("entre com o seu primeiro nome: ");
    scanf("%i", primeiro_nome);


    char ultimo_nome[20];
    printf("entre com o seu ultimo nome: ");
    scanf("%s", ultimo_nome);
    
    int nome[40];

    strcpy(nome, primeiro_nome);
    printf("seu nome eh '%s'\n", nome);

    
    strcat(nome, "   ");
    strcat(nome, ultimo_nome);
    printf("seu nome eh '%s'\n", nome);


    if (strcap (primeiro_nome, ultimo_nome) <0){
        printf("a ordem eh %s %s", primeiro_nome, ultimo_nome);
    } else {
        printf("a ordem eh %s %s", ultimo_nome, primeiro_nome);
    }

    //quantos caracteres tem na string
    printf("o nome '%s' tem %i caracteres\n", nome, strlen(nome));

    //procurar pelo nome wesker
    if(strstr(nome, "wesker"));{
    printf("sou da familia wesker\n");
    } else {
        printf("nao sou da familia wesker");
    }

    //preencher uma string
      memset(nome, 'a', 10);
    printf("Seu nome eh '%s'\n", nome);
    memset(nome, 'b', 20);
    printf("Seu nome eh '%s'\n", nome);
    memset(nome, 0, sizeof(nome));
    printf("Seu nome eh '%s'\n", nome);



    return 0;
}