/******************************************************************************

3. Ler uma palavra e apresentar somente seu primeiro caractere

*******************************************************************************/
#include <stdio.h>

int main()
{
    char nome[50];
    int letras = 0;
    
    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);
    printf("O primeiro caractere do seu nome é: %c ", nome[0]);

    
    return 0;
}