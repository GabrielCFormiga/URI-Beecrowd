#include <stdio.h>
#include <string.h>

int main(){
    int testes, numProdutos, numCompras, qntEscolhida;
    char produtos[1000][51], escolhido[51];
    float valores[1000] = {0}, soma;

    scanf("%d", &testes);

    while(testes--){
        soma = 0;
        scanf("%d", &numProdutos);

        for(int i = 0; i < numProdutos; i++){
            scanf("%s %f", produtos[i], &valores[i]);
        }

        scanf("%d", &numCompras);

         for(int i = 0; i < numCompras; i++){
            scanf("%s %d", escolhido, &qntEscolhida);

            for(int j = 0; j < numProdutos; j++){
                if(strcmp(escolhido, produtos[j]) == 0){
                    soma += valores[j] * qntEscolhida;
                    break;
                }
            }

        }

        printf("R$ %.2f\n", soma);


        

    }

    return 0;
}