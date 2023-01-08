#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hora_cinema = 20;
    int hora_atual = 20;

    if(hora_atual > hora_cinema + 30){
        printf("Passou do tempo limite! Nao pode entrar!");
    }else if(hora_atual < hora_cinema - 30){
        printf("O cinema ainda nao abriu!");
    }else{
        printf("Horario esta certo pode entrar!");
    }
}
