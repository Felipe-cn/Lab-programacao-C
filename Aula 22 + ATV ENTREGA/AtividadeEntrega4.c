#include <stdio.h>

void dobrar(int *n) {
    *n = (*n) * 2;
}

int main() {
    int n;
    
    printf("Digite um número: ");
    scanf("%d", &n);

    dobrar(&n);

    printf("\nO número dobrado é: %d\n", n);
    
    
    return 0;
}