#include <stdio.h>

typedef struct {
    char nome[50];
    int matricula;
} funcionario;

int main() {
    FILE *funcionarios;
    funcionario f;
    int funcionariosq = 0;

    printf("Quantos funcionarios voce deseja cadastrar: ");
    scanf("%d", &funcionariosq);

    if (funcionariosq < 1 || funcionariosq > 5) {
        printf("Opcao invalida!!!\n");
        return 0;
    }

    funcionarios = fopen("funcionarios.txt", "a");

    if (funcionarios == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    fprintf(funcionarios, "\n========================================\n");
    fprintf(funcionarios, "          Funcionarios cadastrados!\n");
    fprintf(funcionarios, "========================================\n");

    for (int i = 0; i < funcionariosq; i++) {

        printf("\nInforme o nome do funcionario: ");
        scanf(" %49[^\n]", f.nome);

        printf("Informe a matricula do funcionario: ");
        scanf("%d", &f.matricula);

        fprintf(funcionarios, "\nFUNCIONARIO: %s\n", f.nome);
        fprintf(funcionarios, "MATRICULA: %d\n", f.matricula);
        fprintf(funcionarios, "========================================\n");
    }

    printf("\nFuncionarios cadastrados com sucesso!\n");
    printf("Dados salvos em funcionarios.txt\n");

    fclose(funcionarios);

    return 0;
}
