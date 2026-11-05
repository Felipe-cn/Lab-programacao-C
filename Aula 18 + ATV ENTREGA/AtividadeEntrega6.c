#include <stdio.h>
int calcularFatorial(int a){
    for (int i = a - 1; i > 0; i--){
        a = a * i;
    }
}


int main()
{
    int a;
    printf("Indique um número de 1 a 12: ");
    scanf("%d",& a);
    
    printf("%d", calcularFatorial(a));
    
    return 0;
}
