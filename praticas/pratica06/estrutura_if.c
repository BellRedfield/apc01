#include <stdio.h>

int main(){

   int numero = 0;
    printf("Digite um número inteiro: ");
    scanf("%i", &numero);

    int numero_eh_divisivel_por_2 = numero % 2 == 0;
    if (numero_eh_divisivel_por_2) {
        printf("o numero %i eh par!\n", numero);
    }
    
    int idade = 0;
    printf("digite sua idade: ");
    scanf("%i", &idade);

    if (idade < 16) {
        printf("voce naum pode votar!\n");
    }
    else if (idade < 18 || idade > 70) {
            printf("voce pode votar!\n");
        }
    

        else  {
        printf("voce eh obrigado a votar!\n");
        }
    

    return 0;
}