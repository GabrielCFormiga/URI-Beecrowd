#include <stdio.h>
 
int main(){
    int n, menor, posicao;
    int array[1000];

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &array[i]);
    }

     for(int i = 0; i < n; i++){
        if(i == 0){
            menor = array[0];
            posicao = 0;
        } else {
            if(array[i] < menor){
                menor = array[i];
                posicao = i;
            }
        }
    }

    printf("Menor valor: %d\nPosicao: %d\n", menor, posicao);
 
    return 0;
}