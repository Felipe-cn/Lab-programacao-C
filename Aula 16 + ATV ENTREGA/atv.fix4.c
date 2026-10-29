/******************************************************************************

5. Ler uma palavra e contar quantas vogais ela possui, considerando letras minúsculas.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
int main()
{
    char nome[50];
    int contador= 0;
    
    printf("Digite uma palavra: ");
    fgets(nome, sizeof(nome), stdin);
    
    for(int i=0; nome[i] != '\0'; i++){
        if (strchr("aeiouAEIOU", nome[i])) {
            contador++;
        }
        
    }
    
    printf("A quantidade de vogais que sua palavra possui é: %d ", contador);
    
    return 0;
}