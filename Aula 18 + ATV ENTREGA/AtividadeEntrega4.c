#include <stdio.h>
int Dobro(int a){
    return a * 2;
}


int main() {
    int a;
    
    printf("===== CONTROLE DE ESTOQUE =====\n");
    printf("Qual a quantidade de produtos inicial da impresa? ");
    scanf("%d",& a);
    
    printf("Quantidade de produtos pós duplicação é: %d", Dobro(a));
    
    return 0;
}
