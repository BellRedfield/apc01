#include <stdio.h>

int main(){
    struct contato_t {
        char nome[61];
        long int telefone;
        char email[61];
    };

    struct contato_t contato;

    printf("entre com o nome do contato: ");
    scanf("%[^^\n]s", contato.nome);
    while(getchar() != '\n');
    printf("entre com o telefone do contato:  ");
    scanf("%i", &contato.telefone);
    while(getchar() != '\n');
    printf("entre com o email do contato:   ");
    scanf("%[^\n]s", contato.email);
    while(getchar() != '\n');

    printf("dados do contato:  ");
    printf("Nome...........: %s\n", contato.nome);
    printf("Telefone.......: %li\n", contato.telefone);
    printf("Email..........: %s\n", contato.email);

    //pode excluir essa outra parte aparentemente? :P num sei
    struct contato_t outro_contato;
     outro_contato = contato;
     printf("nome........: %s\n", outro_contato.nome);
     printf("telefone....: %li\n", outro_contato.telefone);
     printf("email.......: %s\n", outro_contato.email);

    struct contato_t contatos[10];
    contatos [0] = contato;
    contatos [2] = contato;
    contatos [3] = contato;
    contatos [4] = contato;
    contatos [5] = contato;
    contatos [6] = contato;
    contatos [7] = contato;
    contatos [8] = contato;
    contatos [9] = contato;

    return 0;
}