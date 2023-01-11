#include <stdio.h>
#include <stdlib.h>

int main()
{
    char player[256];
    char player2[256];
    printf("---------------------------------------\n");
    printf("------Jogo-do-Pedra-Papel-Tesoura------\n");
    printf("---------------------------------------\n");

    printf("Player 1, Sua vez de jogar...  ");
    scanf("%s",&player);

    printf("Player 2, Sua vez de jogar...  ");
    scanf("%s",&player2);

    printf("\nEstamos calculando o resultado...\n");

    if(strcmp(player,"papel")==0){

            if(strcmp(player2,"papel")==0){
                printf("Player 2 empatou com Player 1...");
            }else if(strcmp(player2,"tesoura")==0){
                printf("Player 2 ganhou do Player 1...");
            }else if(strcmp(player2,"pedra")==0){
                printf("Player 2 perdeu para o Player 1");
            }else{
                printf("Voce jogou uma informação invalida!");
            }

    }else if(strcmp(player,"tesoura")==0){

            if(strcmp(player2,"papel")==0){
                printf("Player 2 perdeu para o Player 1");
            }else if(strcmp(player2,"tesoura")==0){
                printf("Player 2 empatou com Player 1...");
            }else if(strcmp(player2,"pedra")==0){
                printf("Player 2 ganhou do Player 1...");
            }else{
                printf("Voce jogou uma informação invalida!");
            }

    }else if(strcmp(player,"pedra")==0){

            if(strcmp(player2,"papel")==0){
                printf("Player 2 ganhou do Player 1...");
            }else if(strcmp(player2,"tesoura")==0){
                printf("Player 2 perdeu para o Player 1");
            }else if(strcmp(player2,"pedra")==0){
                printf("Player 2 empatou com Player 1...");
            }else{
                printf("Voce jogou uma informação invalida!");
            }

    }else{
        printf("Voce jogou uma informação invalida!");
    }


    return 0;
}
