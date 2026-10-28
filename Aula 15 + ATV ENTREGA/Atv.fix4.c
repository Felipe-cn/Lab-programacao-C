#include <stdio.h>

int main(void) {
    int maior = 0;
    int numeros[3][3] = { 
    {2, 3, 6},
    {4, 8, 2},
    {3, 5, 5}
    };
    
    
        for( int i=0; i<3; i++){
            for( int j=0; j<3; j++){
                    if (numeros [i][j] > maior){
                    maior = numeros[i][j];
                }
            }
        }
    
        printf("O maior número da matriz é: %d\n", maior);
 return 0;
}


