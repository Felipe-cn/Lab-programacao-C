#include <stdio.h>

int main(void) {
    int pares=0;
    int numeros[3][3] = { 
    {2, 3, 6},
    {4, 8, 2},
    {3, 5, 5}
    };
    
    
        for( int i=0; i<3; i++){
            for( int j=0; j<3; j++){
                if (numeros [i][j] % 2 == 0){
                pares += 1;
                }
            }
        }
    
        printf("A quantidade de pares são: %d\n", pares);
 return 0;
}


