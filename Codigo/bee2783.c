#include <stdio.h>

int main(){
    int ContaEspeciais[50] = {0};
    int qntsCartas, qntsEspecias, qntsCompradas, carta, faltando = 0;

    scanf("%d", &qntsCartas);
    scanf("%d", &qntsEspecias);
    scanf("%d", &qntsCompradas);

    while(qntsEspecias--){
        scanf("%d", &carta);
        ContaEspeciais[carta - 1]++; // as especiais vão ter 1
    }

    while(qntsCompradas--){
        scanf("%d", &carta);
        if(ContaEspeciais[carta - 1] == 1){
            ContaEspeciais[carta - 1]++;
        }
    }

    for(int i = 0; i < 50; i++){
        if(ContaEspeciais[i] == 1){
            faltando++;
        }
    }

    printf("%d\n", faltando);
    

    return 0;
}