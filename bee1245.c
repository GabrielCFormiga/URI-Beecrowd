#include <stdio.h>

void ZeraArray(int array[], int limite){
    for(int i = 0; i < limite; i++){
        array[i] = 0;
    }
} 

int main(){
    int testes, paresFormados, indiceDoPar;
    int pares[62], tamanho;
    char lado;

    while(scanf("%d", &testes) != EOF){
        ZeraArray(pares, 62);
        paresFormados = 0;
        
        while(testes--){
            scanf("%d%*c", &tamanho);
            scanf("%c", &lado);

            if(lado == 'E'){
                indiceDoPar = (tamanho - 30)*2;
                pares[indiceDoPar]++;
                
                if(pares[indiceDoPar + 1] > 0){
                    pares[indiceDoPar]--;
                    pares[indiceDoPar + 1]--;
                    paresFormados++;
                }
            } else {
                indiceDoPar = (tamanho - 30)*2 + 1;
                pares[indiceDoPar]++;

                if(pares[indiceDoPar - 1] > 0){
                    pares[indiceDoPar]--;
                    pares[indiceDoPar - 1]--;
                    paresFormados++;
                }
            }
        }

        printf("%d\n", paresFormados);
    }

    return 0;
}