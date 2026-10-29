/******************************************************************************

4. Ler uma palavra e exibir cada caractere em uma linha.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char nome[50];
    int letras = 0;
    
    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);
    
    for(int i=0; nome[i] != '\0'; i++){
        printf("%c\n", nome[i]);
    }

    
    return 0;
}