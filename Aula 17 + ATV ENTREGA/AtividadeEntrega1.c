#include <stdio.h>
#include <string.h>

int main()
{
	char mensagem[30] = "Bem-vindo(a) ";
	char nome[50];
	char perfil[10];
	int letras = 0;
	char copia[50];

	printf("======== CADASTRO DE PRODUTOS =========\n\n");

	printf("Digite seu nome: ");
	fgets(nome, sizeof(nome), stdin);
	printf("Quantidade de caracteres: %zu\n\n\n", strlen(nome));

	printf("Vc é usuário ADMIN ou COMUM? ");
	scanf("%10s",& perfil);

	printf("======= DADOS CADASTRAIS =======\n\n\n");

    strcpy(copia, nome);

	if (strcmp(perfil, "ADMIN") == 0) {
		printf("PERFIL: Administrador.\n\n");
	}   else {
	        printf("Perfil diferente de administrador.\n");
	        break;
	    }

	if (strcmp(perfil, "COMUM") == 0) {
		printf("PERFIL: usuário comum.\n\n");
	}  

	strcat(mensagem, nome);
	printf("%s", mensagem);
	printf("Seu cadastro foi concluido com sucesso!!!");

	return 0;
}
