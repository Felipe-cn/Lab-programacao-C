#include <stdio.h>
void exibirMenu() {
    printf("============= CALCULADORA =============\n\n");
    
    printf("1 - Soma\n");
    printf("2 - Subtração\n");
    printf("3 - Multiplicação\n");
    printf("4 - Divisão\n");
    printf("0 - Sair\n");
}


    float soma (float a, float b) {
        return  a +  b;
    }

    float subtrair (float a, float b) {
        return  a -  b;
    }
    
    float multiplicar (float a, float b) {
        return  a *  b;
    }
    
    float dividir (float a, float b) {
        return  a /  b;
    }

    int main()
{
    exibirMenu();
    int opcao=1;
    float a, b;
    
    
    while (opcao != 0){
    
    printf("Escolha uma opção: ");
    scanf("%d",& opcao);
    switch(opcao)   {
        case 1:
            printf("Enforme o primeiro número: ");
            scanf("%f",& a);
            
            printf("Enforme o segundo número: ");
            scanf("%f",& b);
            
            printf("Resultado: %2.f\n", soma(a, b));
            continue;
            
        case 2:
            printf("Enforme o primeiro número: ");
            scanf("%f",& a);
            
            printf("Enforme o segundo número: ");
            scanf("%f",& b);
            
            printf("Resultado: %2.f\n", subtrair(a, b));
            continue;
            
        case 3:
            printf("Enforme o primeiro número: ");
            scanf("%f",& a);
            
            printf("Enforme o segundo número: ");
            scanf("%f",& b);
            
            printf("Resultado: %2.f\n", multiplicar(a, b));
            continue;
            
        case 4:
            printf("Enforme o primeiro número: ");
            scanf("%f", & a);
            
            printf("Enforme o segundo número: ");
            scanf("%f", & b);
            
            if (a==0 || b==0){
                printf("Informe um valor divisivel valido!\n");
                break;
            }
            
            printf("Resultado: %2.f\n", dividir(a, b));
            continue;
            
        case 5:
            break;
    }
    }

    return 0;
}
