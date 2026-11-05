#include <stdio.h>

float maiorPreco(float a, float b){
    if (a>b){
        return a;
    }
    else if(b>a){
        return b;
    }
    else {
        printf("Valores iguais!!!");
        return a;
        
    }
}

int main() {
    float a,b;

    
    printf("========== COMPARADOR DE PREÇOS ===========\n");
    
    printf("Informe o preço do primeiro produto: ");
    scanf("%f",& a);
    printf("Informe o preço do segundo produto: ");
    scanf("%f",& b);
    
    printf("O produto de maior valor vale: %2.f", maiorPreco(a,b));
    
    return 0;
}
