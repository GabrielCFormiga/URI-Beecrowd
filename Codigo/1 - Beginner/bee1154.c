#include <stdio.h>
 
int main() {
    int idade, entradas = 1; 
    float media = 0;
    
    do {
        scanf("%d", &idade);
        if (idade < 0){
            break;
        }
        media = (idade + media) / entradas;
        entradas++;
    } while (idade >= 0);
    
    printf("%.2f\n", media);
 
    return 0;
}