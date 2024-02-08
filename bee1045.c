#include <stdio.h>

int main(){
    double lados[3], aux;
    int trocou;

    for(int i = 0; i < 3; i++){
        scanf("%lf", &lados[i]);
    }

    while(1){
        trocou = 0;
        
        for(int i = 0; i < 2; i++){
            if(lados[i] < lados[i + 1]){
                aux = lados[i];
                lados[i] = lados[i + 1];
                lados[i + 1] = aux;
                trocou = 1;
            }
        }

        if(trocou == 0){
            break;
        }
    }

    if(lados[0] >= lados[1] + lados[2]){
        printf("NAO FORMA TRIANGULO\n");        
    } else if(lados[0]*lados[0] > lados[1]*lados[1] + lados[2]*lados[2]){
        printf("TRIANGULO OBTUSANGULO\n");
    } else if(lados[0]*lados[0] == lados[1]*lados[1] + lados[2]*lados[2]){
        printf("TRIANGULO RETANGULO\n");
    } else {
        printf("TRIANGULO ACUTANGULO\n");
    }

    if(lados[0] == lados[1] && lados[1] == lados[2]){
        printf("TRIANGULO EQUILATERO\n");
    } else if(lados[0] == lados[1] || lados[1] == lados[2] || lados[0] == lados[2]){
        printf("TRIANGULO ISOSCELES\n");
    }

    return 0;
}