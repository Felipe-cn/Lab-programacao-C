#include <stdio.h>
#include <string.h>

    int main()
{
    char produto[50];
    char categoria[40];
    char copia[50];
    char mensagem[60] = "Descrição: Produto: ";
    
    printf("========== CADASTRO DE PRODUTOS ==========\n\n");
    
    printf("Digite o nome do produto: ");
    scanf("%19s",& produto);
    strcpy(copia, produto);
    
    printf("Qual a categoria do seu produto? HARDWARE OU PERIFERICO? ");
    scanf("%19s", & categoria);
    
    if(strcasecmp(categoria,"HARDWARE") == 0){
        printf("Categoria: HARDWARE\n");
    }
    
    else if(strcasecmp(categoria,"PERIFERICO") == 0){
        printf("Categoria: PERIFERICO\n");
    }
    
    else {
        printf("Categoria: inválida!\n\n");
    }
    
    printf("========== RESUMO ==========\n\n");
    
    printf("Produto: %s\n", copia);
    printf("quantidade de caracteres: %zu\n", strlen(produto));
    printf("Categoria: %s\n\n", categoria);
    
    strcat(mensagem,produto);
    printf("%s\n", mensagem);
    printf("Cadastro concluido!!");
    
    return 0;
}
