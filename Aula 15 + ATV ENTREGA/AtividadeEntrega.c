#include <stdio.h>

int main()
{
    
    int quantidadeocupados = 0;
    int quantidade = 0;
    int assentos[3][4] = { 
    {0, 1, 0 , 0},
    {1, 1, 0 , 1},
    {0, 0, 1 , 0}
    };
    
    
    for (int i=0; i<3; i++){
        for (int j=0; j<4; j++){
            if ( assentos[i][j] == 1){
                quantidadeocupados += 1;
            }
            else {
            quantidade +=1;
            }
        }
    }
    
    printf("O número de assentos ocupados  é igual a: %d\n", quantidadeocupados);
    printf("O número de assentos livres é igual a: %d", quantidade);
    
    return 0;
}

