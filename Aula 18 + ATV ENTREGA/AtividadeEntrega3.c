#include <stdio.h>

int verificarPar(int n){
    if (n % 2 == 0){
        return 1;
    }    
    else {
        return 0;
    }
    
}

int main() {
    int n;

    
    printf("========== VERIFICADOR DE NÚMEROS ===========\n");
    
    printf("Digite um número: ");
    scanf("%d",& n);
    
    if (verificarPar(n) == 0){
        printf("O Número indicado é ímpar : %d",n);
    }
    
    else {
        printf("O Número indicado é par: %d", n);
    }
    
    return 0;
}
