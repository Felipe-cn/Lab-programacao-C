#include <stdio.h>

int main() {
    int n[5];
    FILE *numeros;

    for (int i = 0; i < 5; i++) {
        printf("Digite um numero inteiro: ");
        scanf("%d", &n[i]);
    }

    for (int i = 0; i < 5; i++) {
        printf("%d\n", n[i]);
    }

    numeros = fopen("numeros.txt", "w");

    if (numeros == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    fprintf(numeros, "========================================\n");
    fprintf(numeros, " Gravador de Numeros\n");
    fprintf(numeros, "========================================\n");

    fprintf(numeros, "Numeros salvos: ");
    for (int i = 0; i < 5; i++) {
        fprintf(numeros, "%d ", n[i]);   
    }
    fprintf(numeros, "\n");

    fclose(numeros);

    return 0;
}
