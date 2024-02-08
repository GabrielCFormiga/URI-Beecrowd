#include <stdio.h>
 
int main(){
    int testes;
    long long unsigned pA, pB;
    double g1, g2;

    scanf("%d", &testes);

    while(testes--){
        scanf("%llu %llu %lf %lf", &pA, &pB, &g1, &g2);

        for(int i = 1; i <= 101; i++){
            pA *= (100 + g1)/100;
            pB *= (100 + g2)/100;
            
            if (i == 101){
                printf("Mais de 1 seculo.\n");
                break;
            } else if(pA > pB){
                printf("%d anos.\n", i);
                break;
            } 
        }
    }
 
    
 
    return 0;
}