#include <stdio.h>

void ZeraArray(int Array[], int tamanho){
    for(int i = 0; i < tamanho; i++){
        Array[i] = 0;
    }
}

void ZeraArrayMatriz(int Array[][61], int tamanho){
    for(int i = 0; i < tamanho; i++){
        for(int k = 0; k < 61; k++){
            Array[i][k] = 0;
        }
    }
}

int main(){
    int instancias, conjuntos, operacoes, operacao, x, y, contador;
    int ArConjuntos[10000][61], ContaNumero[60];

    scanf("%d", &instancias);

    while(instancias--){
        ZeraArray(ContaNumero, 60);
        ZeraArrayMatriz(ArConjuntos, 10000);
        
        scanf("%d", &conjuntos);
        
        if(conjuntos == 0){
            break;
        }

        for(int i = 0; i < conjuntos; i++){
            scanf("%d", &ArConjuntos[i][0]);
            
            for(int j = 1; j <= ArConjuntos[i][0]; j++){
                    scanf("%d", &ArConjuntos[i][j]);
                }
        }
        
        scanf("%d", &operacoes);

        for(int k = 0; k < operacoes; k++){
            contador = 0;
            scanf("%d", &operacao);
            scanf("%d%d", &x, &y);

            if(operacao == 1){
                for(int i = 1; i <= ArConjuntos[x - 1][0]; i++){
                    ContaNumero[ArConjuntos[x - 1][i] - 1] = 1;
                }
                for(int i = 1; i <= ArConjuntos[y - 1][0]; i++){
                    if(ContaNumero[ArConjuntos[y - 1][i] - 1] == 1){
                        ContaNumero[ArConjuntos[y - 1][i] - 1] = 0;
                        contador++;
                    }
                }
                printf("%d\n", contador);
            } else {
                for(int i = 1; i <= ArConjuntos[x - 1][0]; i++){
                    ContaNumero[ArConjuntos[x - 1][i] - 1] = 1;
                }
                for(int i = 1; i <= ArConjuntos[y - 1][0]; i++){
                    ContaNumero[ArConjuntos[y - 1][i] - 1] = 1;
                }
                for(int i = 0; i < 60; i++){
                    if(ContaNumero[i] == 1){
                        contador++;
                    }
                }
                printf("%d\n", contador);
            }
        }

    }
 
 
    return 0;
}