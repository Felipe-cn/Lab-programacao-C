#include <stdio.h>

int main(void) {
    float numeros[3][2];
    float media=0;
    
        for( int i=0; i<3; i++){
            for( int j=0; j<2; j++){
                printf("Digite as notas dos três alunos nas duas provas: ");
                scanf("%f,",& numeros[i][j]);
        }}
    
        for( int i=0; i<3; i++){
            for( int j=0; j<2; j++){
                media += numeros[i][j];
            }
            media = media/2;
            printf("Sua média é: %3.f\n", media);
            media = 0;
        }        
    
 return 0;
}

