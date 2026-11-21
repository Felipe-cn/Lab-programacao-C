#include <stdio.h>

int main() {
    int n[5];
    int *p = n;
    
    for (int i = 0; i < 5; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &n[i]);
    }
    
    
    for (int i = 0; i < 5; i++) {
         printf("\nOs números digitados são: %d", *p);
         p++;
    }
    
    
    return 0;
}