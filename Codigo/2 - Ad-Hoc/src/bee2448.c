#include <stdio.h>
#include <stdlib.h>

int BuscaBinaria(int ar[], int tamanho, int valor) {
    int inicio = 0;
    int final = tamanho - 1;
    int meio;


    while(inicio <= final){
        meio = (inicio + final)/2;

        if (valor > ar[meio]){
            inicio = meio + 1;
        } else if (valor < ar[meio]){
            final = meio - 1;
        } else{
            return meio;
        }
    }

    return -1;
}

int main(){
    int casas[45000], pedidos[45000];
    int numCasas, numPedidos, tempo = 0, inicio = 0, final;

    scanf("%d %d", &numCasas, &numPedidos);

    for(int i = 0; i < numCasas; i++){
        scanf("%d", &casas[i]);
    }

    for(int i = 0; i < numPedidos; i++){
        scanf("%d", &pedidos[i]);

        final = BuscaBinaria(casas, numCasas, pedidos[i]);
        tempo += abs(final - inicio);
        inicio = final;
    }

    printf("%d\n", tempo);

    return 0;
}