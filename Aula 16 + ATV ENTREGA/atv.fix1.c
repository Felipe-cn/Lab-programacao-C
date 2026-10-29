
#include <stdio.h>

int main()
{
    char nome[50];
    int letras = 0;
    
    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);
    printf("Seu nome é: %s ", nome);

    
    return 0;
}