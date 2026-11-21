#include <stdio.h>

int main() {
    int numero;
    printf("\nPor favor digite um número:");
    scanf("%d", &numero);
    printf("\nO número digitado foi: %d\n", numero);
    printf("\nO endereço do número é: %p\n", (void*)&numero);
    return 0;
}
