#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[256];
    int idade;


    printf("Ola qual o seu nome? ");
    scanf("%s",nome);

    printf("Qual e sua idade %s? ",nome);
    scanf("%d",&idade);

    printf("\n Cadastro Realizado:\n Nome: %s \n Idade: %d anos\n Aguade enquanto lemos seus dados...\n",nome,idade);

    printf("\nA primeira letra do seu nome e: %c\n",nome[0]);

    if(idade >= 18){
        printf("\nVoce e adulto!");
    }else if(idade >= 12){
        printf("\nVoce e adolescente!");
    }else{
        printf("\nVoce e uma criança!");
    }

    return 0;
}
