#include <string.h>
#include <stdio.h>


void separacao(void) {
 printf("===============================\n");
}

    int calcularPontuacao (int idade, int pressao, int fumante,int diabetes,
        int doencaCardiaca, int ldl,float peso, float altura, int sedentario,
        int ultraprocessados, int estresse, int sono, int sexoMasculino) { 
    
    int pontos = 0;
    float imc = peso / (altura * altura);
    
    if (idade >= 65)pontos += 3;
    if (pressao >= 160)pontos += 3;
    if (fumante == 1)pontos += 3;
    if (diabetes == 1)pontos += 2;
    if (doencaCardiaca == 1)pontos += 2;
    if (ldl >= 160)pontos += 2;
    if (imc >= 30)pontos += 2;
    if (sedentario == 1)pontos += 1;
    if (ultraprocessados == 1)pontos += 1;
    if (estresse == 1)pontos += 1;
    if (sono == 1)pontos += 1;
    if (sexoMasculino == 1)pontos += 1;
    
    return pontos;
    }
    
    
    void porcentagemrisco(int pontos) {
        if (pontos <= 4) {
            printf("Risco menor que 10%%");
        }
        else if (pontos <= 9) {
            printf("Risco entre 10 a 20%%");
        }
        else if (pontos <= 14) {
            printf("Risco entre 20 a 30%%");
        }
        else if (pontos <= 18) {
            printf("Risco entre 30 a 40%%");
        }
        else {
            printf("Acima de 50%%");
        }
}
    
    
int main()

{
    int pontos[5];
    int pacientes;
	char nome[5][50];
	float fatores[5][13];
	
    
    separacao();
    printf("SISTEMA DE ANALÍSE CARIOVASCULAR\n");
    separacao();
    
    printf(" Qual a quantidade de pacientes que deseja cadastrar: ");
    scanf("%d",& pacientes);
    
    if (pacientes < 1 || pacientes > 5) {
        printf("Quantidade invalida! Cadastre de 1 a 5 pacientes.\n");
        return 0;
    }
    
    for (int i=0; i<pacientes;i++){
        printf("\nPaciente %d\n", 1 + i);
        printf("Nome: ");
        scanf(" %49[^\n]", nome[i]); 
        printf("A idade do paciente:");
        scanf("%f",& fatores[i][0]);
        printf("Qual a pressão arterial sistólica(mmHg): ");
        scanf("%f",& fatores[i][1]);
        printf("O paciente fuma?(1-Sim/ 0-Não) ");
        scanf("%f",& fatores[i][2]);
        printf("O paciente possui diabetes?(1-Sim/ 0-Não) ");
        scanf("%f",& fatores[i][3]);
        printf("Apresenta histórico de doenças cardíacas?(1-Sim/ 0-Não) ");
        scanf("%f",& fatores[i][4]);
        printf("fatores de Colesterol LDL(mg/dL)");
        scanf("%f",& fatores[i][5]);
        printf("Qual o peso do paciente (Kg)");
        scanf("%f",& fatores[i][6]);
        printf("Qual a altura do paciente (m) ");
        scanf("%f",& fatores[i][7]);
        printf("O paciente é sedentario?(1-Sim/ 0-Não) ");
        scanf("%f",& fatores[i][8]);
        printf("O paciente tem alimentação rica em ultraprocessados?(1-Sim/ 0-Não) ");
        scanf("%f",& fatores[i][9]);
        printf("O paciente Apresenta extresse crônico elevado?(1-Sim/ 0-Não) ");
        scanf("%f",& fatores[i][10]);
        printf("O paciente Apresenta sono inadequado?(1-Sim/ 0-Não) ");
        scanf("%f",& fatores[i][11]);
        printf("O paciente é do sexo biológico masculino?(1-Sim/ 0-Não) ");
        scanf("%f",& fatores[i][12]);
        }
    
	
    
    separacao();  
    printf(" RELATÓRIO DE RISCO\n");
    separacao();
    
    
    for (int i = 0; i < pacientes; i++) {
        pontos[i] = calcularPontuacao((int)fatores[i][0],
        (int)fatores[i][1], (int)fatores[i][2],(int)fatores[i][3], (int)fatores[i][4], (int)fatores[i][5],
        fatores[i][6], fatores[i][7], (int)fatores[i][8],(int)fatores[i][9], (int)fatores[i][10],(int)fatores[i][11],
        (int)fatores[i][12] );
    }
    
    
    for (int i = 0; i < pacientes; i++) {
        printf("Paciente: %s\n ",nome[i]);
        printf("Pontos: %d\n", pontos[i]);
        printf("Classificação:\n ");
        porcentagemrisco(pontos[i]);
        printf("\n");
    }
    separacao();
	return 0;
}
