#include <stdio.h>

typedef struct {
    char nome[50];
    float salario;
    int horasExtras;
} Funcionario;

int main() {
    int q_funcionarios;
    FILE *funcionarios;
    Funcionario f;

    printf("Quantos Funcionarios voce deseja cadastrar: ");
    if (scanf("%d", &q_funcionarios) != 1) {
        printf("Entrada invalida!\n");
        return 1;
    }

    if (q_funcionarios < 1 || q_funcionarios > 5) {
        return 0;
    }

    funcionarios = fopen("funcionarios.txt", "w");
    if (funcionarios == NULL) {
        printf("\nErro ao abrir o arquivo!\n");
        return 1;
    }

    fprintf(funcionarios, "========================================\n");
    fprintf(funcionarios, " Registrador de funcionarios\n");
    fprintf(funcionarios, "========================================\n");

    for (int i = 0; i < q_funcionarios; i++) {
        printf("Insira o nome do funcionario: ");
        scanf(" %49[^\n]", f.nome);

        printf("Insira o salario do funcionario: ");
        scanf("%f", &f.salario);

        printf("Insira a quantidade de horasExtras que esse funcionario fez: ");
        scanf("%d", &f.horasExtras);

        fprintf(funcionarios, "Nome: %s\n", f.nome);
        fprintf(funcionarios, "Salario: %.2f\n", f.salario);
        fprintf(funcionarios, "Horas Extras: %d\n", f.horasExtras);
        fprintf(funcionarios, "----------------------------------------\n");
    }

    fclose(funcionarios);
    printf("\nInformacoes salvas com sucesso!\n");

    return 0;
}
