#include <stdio.h>
#include <math.h>
 
long long unsigned RetornaGramas(int quadrados){
    long long unsigned somaGraos = 1;
    somaGraos = pow(2,quadrados) - 1;
    return somaGraos/12;
}

int main(){
    int testes, quadrados;
    long long unsigned pesoGramas, pesoKGramas;

    
    scanf("%d", &testes);

    while(testes--){
        scanf("%d", &quadrados);
        pesoGramas = RetornaGramas(quadrados);
        pesoKGramas = pesoGramas/1000;
        printf("%llu kg\n", pesoKGramas);
    }
    
    return 0;
}