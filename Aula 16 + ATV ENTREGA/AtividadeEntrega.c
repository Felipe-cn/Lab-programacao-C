#include <stdio.h>

int main()
{
    char nome[50];
    int letras = 0;
    
    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);
    printf("Seu nome é: %s ", nome);

    for (int i=0; nome[i] != '\0'; i++){
        letras += 1;    
    }
    
    printf("A quantidade de letras da sua palavra é: %d", letras);
    
    return 0;
}
