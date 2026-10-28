#include <stdio.h>

int main(void) {
    int numeros[2][3] = {
    {10, 12, 15},
    {20, 25, 30}
    };
    int soma=0;
    
        for( int i=0; i<2; i++){
            for( int j=0; j<3; j++){
                soma += numeros[i][j];
        }}
    printf("soma: %d ",soma);
    
    
 return 0;
}


