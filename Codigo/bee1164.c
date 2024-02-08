#include <stdio.h>
 
int main() {
    int i, n, vezes, j, soma = 0;
    
    scanf("%d", &vezes);
    
    for (i = 1; i <= vezes; i++){
        scanf("%d", &n);
        for (j = 1; j <= n/2; j++){
            if (n%j == 0){
                soma = soma + j;
            }
        }
        
        if (soma == n){
            printf("%d eh perfeito\n", n);
        } else {
            printf("%d nao eh perfeito\n", n);
        }
        
        soma = 0;
        
    }
    
    
    return 0;
}