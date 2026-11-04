#include <stdio.h>
void exibirMenu() {
    printf("============= CALCULADORA =============\n\n");
    
    printf("1 - Soma\n");
    printf("2 - Subtração\n");
    printf("3 - Multiplicação\n");
    printf("4 - Divisão\n");
    printf("0 - Sair\n");
}


    int soma (int a, int b) {
        return  a +  b;
    }

    int subtrair (int a, int b) {
        return  a -  b;
    }
    
    int multiplicar (int a, int b) {
        return  a *  b;
    }
    
    int dividir (int a, int b) {
        return  a /  b;
    }

    int main()
{
    exibirMenu();
    int opcao=1;
    int a, b;
    
    
    while (opcao != 0){
    
    printf("Escolha uma opção: ");
    scanf("%d",& opcao);
    switch(opcao)   {
        case 1:
            printf("Enforme o primeiro número: ");
            scanf("%d",& a);
            
            printf("Enforme o segundo número: ");
            scanf("%d",& b);
            
            printf("Resultado: %d\n", soma(a, b));
            continue;
            
        case 2:
            printf("Enforme o primeiro número: ");
            scanf("%d",& a);
            
            printf("Enforme o segundo número: ");
            scanf("%d",& b);
            
            printf("Resultado: %d\n", subtrair(a, b));
            continue;
            
        case 3:
            printf("Enforme o primeiro número: ");
            scanf("%d",& a);
            
            printf("Enforme o segundo número: ");
            scanf("%d",& b);
            
            printf("Resultado: %d\n", multiplicar(a, b));
            continue;
            
        case 4:
            printf("Enforme o primeiro número: ");
            scanf("%d", & a);
            
            printf("Enforme o segundo número: ");
            scanf("%d", & b);
            
            if (a==0 || b==0){
                printf("Informe um valor divisivel valido!\n");
                break;
            }
            
            printf("Resultado: %d\n", dividir(a, b));
            continue;
            
        case 5:
            break;
    }
    }

    return 0;
}
