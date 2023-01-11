#include <stdio.h>
#include <stdlib.h>

int main()
{
   char nome[256];
   char sobrenome[256];
   int ano_nascimento;
   int idade;

   printf("Qual e o seu nome? ");
   scanf("%s",nome);

   printf("Qual e seu sobrenome %s? ",nome);
   scanf("%s",sobrenome);

   printf("Prazer, %s %s seja Bem-Vindo.\nQual e sua idade? ",nome,sobrenome);
   scanf("%d",&idade);

   printf("Muito bom! O %s tem %d anos, Voce nasceu quando %s? ",nome,idade);
   scanf("%d",&ano_nascimento);

   printf("Caramba %s voce nasceu em %d!! \n",nome,ano_nascimento);

    return 0;
}
