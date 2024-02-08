#include <stdio.h>
 
int main(){
    int sequencia[500];
    int tamanho, contador = 1;

    scanf("%d", &tamanho);

    for(int i = 0; i < tamanho; i++){
        scanf("%d", &sequencia[i]);
    }

    int i = 0;
    int j = tamanho - 1;

    while(i <= j){
        while(sequencia[i] != 2){
            if(i > j){
                break;
            }
            i++;
        }
        
        if(i > j){
            break;
        }
        
        contador++;
        i++;
        while(sequencia[i] != 1){
            i++;
        }
        contador++;
        i++;
    }

    printf("%d\n", contador);

    return 0;
}