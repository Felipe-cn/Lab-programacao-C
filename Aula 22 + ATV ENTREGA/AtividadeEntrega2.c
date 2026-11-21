#include <stdio.h>

int main() {
    int numero =20;
    int *p=&numero;
    printf("\nO número salvo é: %d\n", numero);
    printf("\nO endereço do número é: %p\n", (void*)&numero);
    printf("\nO valor apontado pelo ponteiro é: %d\n", *p);
    return 0;
}